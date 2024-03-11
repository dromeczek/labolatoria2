#include <string>
#include <vector>
using namespace std;
#include "Book.h"
#include "Member.h"
class Library
{
private:
vector <Book>biblio;
public:
void addBook(Book b); 
void removeBook(Book b);
void returnBook(Member m, string isbn);
void borrowBook(Member m, string isbn);
void displayBooks(); 
};