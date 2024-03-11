#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book(string m_title, string m_author, string m_isbn);
    ~Book(); // Destruktor
    string getTitle();
    string getAuthor();
    string getIsbn();
    bool getAvailable();
    void setTitle(string m_title);
    void setAuthor(string m_author);
    void setIsbn(string m_isbn);
    void setAvailable(bool m_available);
    void getInfo();
};