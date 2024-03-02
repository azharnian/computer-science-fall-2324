const routes = [
    {
        method: 'GET',
        path: '/',
        handler: (request, h) => {
            // return 'Homepage';
            // return h.view('views/index.html');
            return JSON.stringify({
                status : false
            })
        },
    },
    {
        method: '*',
        path: '/',
        handler: (request, h) => {
            // return 'Halaman tidak dapat diakses dengan method tersebut';
            return h.response({
                message : 'Halaman tidak dapat diakses dengan method tersebut'
            }).code(403);
        },
    },
    {
        method: 'GET',
        path: '/about',
        handler: (request, h) => {
            return 'About page';
        },
    },
    {
        method: '*',
        path: '/about',
        handler: (request, h) => {
            return 'Halaman tidak dapat diakses dengan method';
        },
    },
    {
        method: '*',
        path: '/{any*}',
        handler: (request, h) => {
            return 'Halaman tidak ditemukan';
        },
    },
];
 
module.exports = routes;