#include "Library.h"
#include <iostream>

void Library::addBook(Book b) {
    biblio.push_back(b);
}

void Library::displayBooks() {
    for (int i = 0; i < biblio.size(); i++) {
        biblio[i].getInfo();
        cout << endl;
    }
}

void Library::borrowBook(Member m, string isbn) {
    for (int i = 0; i < biblio.size(); ++i) {
        if (biblio[i].getIsbn() == isbn && biblio[i].getAvailable()) {
            biblio[i].setAvailable(false);
            m.borrowBook();
            return;
        }
    }
    cout << "Ksiazka nie jest dostepna do wyporzyczenia" << endl;
}

void Library::returnBook(Member m, string isbn) {
    for (int i = 0; i < biblio.size(); ++i) {
        if (biblio[i].getIsbn() == isbn && !biblio[i].getAvailable()) {
            biblio[i].setAvailable(true);
            m.returnBook();
            return;
        }
    }
    cout << "Ksiazka nie znaleziona" << endl;
}

void Library::removeBook(Book b) {
    for (int i = 0; i < biblio.size(); ++i) {
        if (biblio[i].getIsbn() == b.getIsbn()) {
            biblio.erase(biblio.begin() + i);
            return;
        }
    }
}