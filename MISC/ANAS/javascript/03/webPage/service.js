const http = require('http');
const fs = require('fs');
const path = require('path');

const requestListener = (request, response) => {
    response.setHeader('Content-Type', 'text/html');
    response.statusCode = 200;

    const { method, url } = request;

    // Function to serve HTML files
    const serveHTML = (fileName) => {
        const filePath = path.join(__dirname, 'views', fileName);
        fs.readFile(filePath, 'utf8', (err, data) => {
            if (err) {
                response.statusCode = 500;
                response.end('<h1>Internal Server Error</h1>');
            } else {
                response.end(data);
            }
        });
    };

    if (url === '/') {
        if (method === 'GET') {
            serveHTML('index.html');
        } else {
            response.end(`<h1>Halaman tidak dapat diakses dengan ${method} request</h1>`);
        }
    } else if (url === '/about') {
        if (method === 'GET') {
            serveHTML('about.html');
        } else if (method === 'POST') {
            let body = [];

            request.on('data', (chunk) => {
                body.push(chunk);
            });

            request.on('end', () => {
                body = Buffer.concat(body).toString();
                const { name } = JSON.parse(body);
                response.end(`<h1>Halo, ${name}! Ini adalah halaman about</h1>`);
            });
        } else {
            response.end(`<h1>Halaman tidak dapat diakses menggunakan ${method} request</h1>`);
        }
    } else {
        response.end('<h1>Halaman tidak ditemukan!</h1>');
    }
};

const server = http.createServer(requestListener);

const port = 5000;
const host = 'localhost';

server.listen(port, host, () => {
    console.log(`Server berjalan pada http://${host}:${port}`);
});
