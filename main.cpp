#include <iostream>
using namespace std;
#include "Library.h"
int main()
{
 Library m_biblioteka;
m_biblioteka.addBook(Book("Moja ksiazka","Igor","12"));
m_biblioteka.addBook(Book("ksiega","Marcin","1"));
m_biblioteka.addBook(Book("Haryy Potter","J.K. Rowling","2"));
m_biblioteka.addBook(Book("Zbrodnia i Kara","Fiodor Dostojewski","3"));
m_biblioteka.addBook(Book("Ferdydurke","Witold Gombrowicz","4"));
 m_biblioteka.displayBooks();
 Member m_memberT("Tomasz");
 Member m_memberM("Maciek");
 Member m_memberW("Wiktoria");
for(int z=0;z<3;z++)
{
    string t,i,a;
    cout<<"Podaj tytul";
    getline(cin,t);
    cout<<"Podaj autora";
    getline(cin,a);
    cout<<"Podaj isbn";
    getline(cin,i);
    cout<<endl;
    m_biblioteka.addBook(Book(a,t,i));
}

    m_biblioteka.borrowBook(m_memberT, "12");
    m_biblioteka.borrowBook(m_memberT, "2");
    m_biblioteka.borrowBook(m_memberT, "3");
    m_biblioteka.displayBooks();
    m_biblioteka.removeBook(Book("Ferdydurke","Witold Gombrowicz","4"));
    m_biblioteka.borrowBook(m_memberM,"2");
    m_biblioteka.displayBooks();
    m_biblioteka.returnBook(m_memberT, "2");
    m_biblioteka.displayBooks();
}