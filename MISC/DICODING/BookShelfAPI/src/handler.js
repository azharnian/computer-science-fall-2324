const { nanoid } = require('nanoid');
const books = require('./books');

// Kriteria 3
// POST : Menyimpan buku
const addBook = (request, h) => {
    const {name, year, author, summary, publisher, pageCount, readPage, reading} = request.payload;

    // Client tidak melampirkan properti namepada request body.
    if (name === undefined) {
        const response = h.response({
            "status": "fail",
            "message": "Gagal menambahkan buku. Mohon isi nama buku"
        }).code(400);
        return response;
    }

    // Client melampirkan nilai properti readPage yang lebih besar dari nilai properti pageCount
    if (pageCount < readPage){
        const response = h.response({
            "status": "fail",
            "message": "Gagal menambahkan buku. readPage tidak boleh lebih besar dari pageCount"
        }).code(400);
        return response;
    }

    // menyimpan buku
    const id = nanoid(16);
    const insertedAt = new Date().toISOString();
    const updatedAt = insertedAt;
    const finished = (pageCount === readPage);
    const newBook = {
        id, name, year, author, summary, publisher, pageCount, readPage, finished, reading, insertedAt, updatedAt,
    };
    books.push(newBook);

    const isSuccess = books.filter((book) => book.id === id).length > 0;

    if (isSuccess) {
        const response = h.response({
            status: 'success',
            message: 'Buku berhasil ditambahkan',
            data: {
                bookId: id,
            }
        }).code(201);
        return response;
    }

    const response = h.response({
        status: 'fail',
        message: 'Buku gagal ditambahkan',
    }).code(500);
    return response;
};

// Kriteria 4
// GET : Memapilkan seluruh buku
const getAllBooks = (request, h) => {
    // menambahkan fitur query parameters pada route GET /books
    const {name, reading, finished} = request.query;

    let filteredBooks = books;
    // ?name param non-case sensitive
    if (name !== undefined) filteredBooks = filteredBooks.filter((book) => book.name.toLowerCase().includes(name.toLowerCase()));
    // ?reading param
    if (reading !== undefined) filteredBooks = filteredBooks.filter((book) => book.reading === !!Number(reading));
    // ?finished param
    if (finished !== undefined) filteredBooks = filteredBooks.filter((book) => book.finished === !!Number(finished));

    // mengembalikan respons untuk menampilkan seluruh buku
    const response = h.response({
        status: 'success',
        data: {
            books: filteredBooks.map((book) => ({
                id: book.id,
                name: book.name,
                publisher: book.publisher,
            }))
        }
    }).code(200);
    return response;
};

// Kriteria 5
// GET : Menampilkan detail buku dengan id
const getBookById = (request, h) => {
    const { id } = request.params;
    const book = books.filter((b) => b.id === id)[0];

    if (book !== undefined) {
        return {
            status: 'success',
            data: {
                book,
            }
        };
    };

    const response = h.response({
        status: 'fail',
        message: 'Buku tidak ditemukan',
    }).code(404);
    return response;
};

// Kriteria 6
// PUT : Mengubah data buku dengan id
const updateBookById = (request, h) => {
    const { id } = request.params;
    const { name, year, author, summary, publisher, pageCount, readPage, reading } = request.payload;
    const updatedAt = new Date().toISOString();
    const index = books.findIndex((book) => book.id === id);
  
    if (index !== -1) {
      if (name === undefined) {
        const response = h.response({
          status: 'fail',
          message: 'Gagal memperbarui buku. Mohon isi nama buku',
        }).code(400);
        return response;
      }
  
      if (pageCount < readPage) {
        const response = h.response({
          status: 'fail',
          message: 'Gagal memperbarui buku. readPage tidak boleh lebih besar dari pageCount',
        }).code(400);
        return response;
      }

      const finished = (pageCount === readPage);
      books[index] = {
        ...books[index], name, year, author, summary, publisher, pageCount, readPage, finished, reading, updatedAt
      };
      const response = h.response({
        status: 'success',
        message: 'Buku berhasil diperbarui',
      }).code(200);
      return response;
    }
  
    const response = h.response({
      status: 'fail',
      message: 'Gagal memperbarui buku. Id tidak ditemukan',
    }).code(404);
    return response;
};

// Kriteria 7
// DELETE : Menghapus buku dengan id
const deleteBookById = (request, h) => {
    const { id } = request.params;
    const index = books.findIndex((note) => note.id === id);
    if (index !== -1) {
        books.splice(index, 1);
        const response = h.response({
            status: 'success',
            message: 'Buku berhasil dihapus'
        }).code(200);
        return response;
    }

    const response = h.response({
        status: 'fail',
        message: 'Buku gagal dihapus. Id tidak ditemukan'
    }).code(404);
    return response;
};

module.exports = {
    addBook, 
    getAllBooks, 
    getBookById, 
    updateBookById, 
    deleteBookById
};