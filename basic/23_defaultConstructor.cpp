#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title_;
        int page_;
        Book(string= "HELLO", int = 100);
};

Book::Book(string title, int page) {
    title_ = title;
    page_ = page;
}

int main() {
    Book b1;
    cout << b1.title_ << b1.page_ << endl;
    return 0;
}
