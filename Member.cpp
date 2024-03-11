#include "Member.h"
using namespace std;

Member::Member(string m_name) : name(m_name), booksBorrowed(0) {}

void Member::borrowBook() {
    booksBorrowed++;
}

void Member::returnBook() {
    if (booksBorrowed > 0)
        booksBorrowed--;
}

void Member::setName(string m_name) {
    name = m_name;
}

string Member::getName() {
    return name;
}

unsigned int Member::getBooksBorrowed() {
    return booksBorrowed;
}