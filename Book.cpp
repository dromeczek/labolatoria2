#include "Book.h"
Book::Book(string m_title, string m_author, string m_isbn)
    : title(m_title), author(m_author), isbn(m_isbn), available(true) {}

Book::~Book() {
    cout << "niszcze ksiazke" << endl;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

string Book::getIsbn() {
    return isbn;
}

bool Book::getAvailable() {
    return available;
}

void Book::setAuthor(string m_author) {
    author = m_author;
}

void Book::getInfo() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    if (available == true)
        cout << "Jest dostepna" << endl;
    else
        cout << "Nie jest dostepna" << endl;
}

void Book::setTitle(string m_title) {
    title = m_title;
}

void Book::setIsbn(string m_isbn) {
    isbn = m_isbn;
}

void Book::setAvailable(bool m_available)
{
    available = m_available;
}