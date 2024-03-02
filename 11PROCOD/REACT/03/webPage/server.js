const http = require('http');
const fs = require('fs');
const path = require('path');

const requestListener = (request, response) => {
    const { method, url } = request;

    if (url.endsWith('.css')) {
        res.setHeader('Content-Type', 'text/css');
    }

    if (url.endsWith('.js')) {
        res.setHeader('Content-Type', 'text/javascript');
    }

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
            response.setHeader('Content-Type', 'text/html');
            response.statusCode = 200;
            serveHTML('index.html');
        } 
    } else {
        response.statusCode = 404;
        response.end('<h1>Halaman tidak ditemukan!</h1>');
    }
};

const server = http.createServer(requestListener);
const port = 5000;
const host = 'localhost';

server.listen(port, host, () => {
    console.log(`Server berjalan pada http://${host}:${port}`);
});
