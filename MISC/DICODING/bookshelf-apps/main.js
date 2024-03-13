document.addEventListener('DOMContentLoaded', () => {

    let books;
    if (!localStorage.getItem('books'))
        localStorage.setItem('books', JSON.stringify([]));
    books = JSON.parse(localStorage.getItem('books'));

    const isDuplicateBook = title => {
        return books.some(book => book.title === title)
    }
    
    const createArticleBook = book => {
        const articleEl = document.createElement('article');
        articleEl.className = 'book_item';

        const titleEl = document.createElement('h3');
        titleEl.innerHTML = `Title : ${book.title}`;

        const authorParagraphEL = document.createElement('p');
        authorParagraphEL.innerHTML = `Auhor : ${book.author}`

        const yearParagraphEl = document.createElement('p');
        yearParagraphEl.innerHTML = `Year : ${book.year}`;

        const actionContainerEl = document.createElement('div');
        actionContainerEl.className = 'action';

        const deleteBtnEl = document.createElement('button');
        deleteBtnEl.innerHTML = "Hapus buku";
        deleteBtnEl.className = "red";
        deleteBtnEl.addEventListener('click', () => {deleteBook(book.id)})

        const updateBtnEl = document.createElement('button');
        updateBtnEl.innerHTML = "Edit buku";
        updateBtnEl.className = "blue";
        updateBtnEl.addEventListener('click', () => {updateInfoBook(book.id)})

        const completeBtnEl = document.createElement('button');
        completeBtnEl.addEventListener('click', () => {setToCompleteBook(book.id)});
        if (book.isComplete) {
            completeBtnEl.innerHTML = "Belum selesai dibaca";
            completeBtnEl.className = "yellow";
        } else {
            completeBtnEl.innerHTML = "Selesai dibaca";
            completeBtnEl.className = "green";
        }

        actionContainerEl.append(deleteBtnEl);
        actionContainerEl.append(updateBtnEl);
        actionContainerEl.append(completeBtnEl);

        articleEl.append(titleEl);
        articleEl.append(authorParagraphEL);
        articleEl.append(yearParagraphEl);
        articleEl.append(actionContainerEl);

        return articleEl;
    }

    const updateBookshelf = listOfBook => {
        const incompleteBookshelfList = document.getElementById('incompleteBookshelfList');
        const completeBookshelfList = document.getElementById('completeBookshelfList');

        incompleteBookshelfList.innerHTML = '';
        completeBookshelfList.innerHTML = '';

        listOfBook.forEach(book => {
            book.isComplete ?
                completeBookshelfList.append(createArticleBook(book))
            :
                incompleteBookshelfList.append(createArticleBook(book));
        });
    }

    const deleteBook = id => {
        const index = books.findIndex(book => book.id === id);
        if (index !== -1) {
            let userConfirmation = confirm(`Are you sure to delete book : ${books[index].title} (id : ${id})`);
            if (userConfirmation){
                books.splice(index, 1);
                localStorage.setItem('books', JSON.stringify(books));
                updateBookshelf(books);
            }
            
        }
    }

    const setToCompleteBook = id => {
        const index = books.findIndex(book => book.id === id);
        if (index !== -1) {
            books[index].isComplete = !books[index].isComplete;
            localStorage.setItem('books', JSON.stringify(books));
            updateBookshelf(books);
        }
    }

    const updateInfoBook = id => {
        const index = books.findIndex(book => book.id === id);
        if (index !== -1) {
            const newTitle = prompt(`Masukkan judul baru buku (Judul lama ${books[index].title}) `);
            const newAuthor = prompt(`Masukkan nama pengarang baru (Pengarang lama ${books[index].author})`);
            const newYear = parseInt(prompt(`Masukkan tahun terbit baru (Tahun terbit lama ${books[index].author})`));

            const emptyNewTitle = newTitle.length === 0;
            const emptyNewAuthor = newAuthor.length === 0;
            const invalidNewYear = typeof newYear !== 'number';

            if (emptyNewTitle || emptyNewAuthor || invalidNewYear){
                alert('Pastikan semua informasi buku terisi benar!');
                return;
            }
            
            books[index].title = newTitle;
            books[index].author = newAuthor;
            books[index].year = newYear;
            localStorage.setItem('books', JSON.stringify(books));
            updateBookshelf(books);
            alert('Update informasi buku selesai.')
        }
    }

    const handleSearch = e => {
        e.preventDefault();

        const query = document.getElementById('searchBookTitle').value.toLowerCase().trim();

        const searchResults = books.filter(book =>  (
                book.title.toLowerCase().includes(query) || book.author.toLowerCase().includes(query) || book.year.toString().includes(query)
          ));

        if (searchResults.lenght !== 0)
            updateBookshelf(searchResults);
    }

    document.getElementById('inputBook').addEventListener('submit', e => {
        e.preventDefault();
        
        const bookTitle = document.getElementById('inputBookTitle').value;
        const bookAuthor = document.getElementById('inputBookAuthor').value;
        const bookYear = document.getElementById('inputBookYear').value;
        const bookIsComplete = document.getElementById('inputBookIsComplete').checked;

        if (isDuplicateBook(bookTitle))
            alert(`Buku dengan judul ${bookTitle} sudah ada dalam daftar.`);
        else {
            const book = {
                id : new Date().getTime(),
                title: bookTitle.toLowerCase(),
                author: bookAuthor.toLowerCase(),
                year: bookYear,
                isComplete: bookIsComplete
            };

            books.push(book);
            localStorage.setItem('books', JSON.stringify(books));

            updateBookshelf(books);
        }
        document.getElementById('inputBookTitle').value = '';
        document.getElementById('inputBookAuthor').value = '';
        document.getElementById('inputBookYear').value = '';
        document.getElementById('inputBookIsComplete').checked = false;
    });

    const searchBook = document.getElementById('searchBook');
    searchBook.addEventListener('submit', handleSearch);
    searchBook.addEventListener('keyup', e => {
        handleSearch(e);
    })

    updateBookshelf(books);
});