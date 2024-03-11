#include <string>
using namespace std;

class Member {
private:
    unsigned int booksBorrowed;
    string name;
public:
    Member(string m_name);
    ~Member() {}
    void borrowBook();
    void returnBook();
    void setName(string m_name);
    string getName();
    unsigned int getBooksBorrowed();
};