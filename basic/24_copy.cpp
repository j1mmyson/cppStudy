#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    string title_;
    int totalPage_;
    int currentPage_;
    // Book(){}
    Book(string, int);
    Book(const Book&);
};

Book::Book(string title, int page) {
    title_ = title;
    totalPage_ = page;
}

Book::Book(const Book& origin) {
        title_ = origin.title_;
        totalPage_ = origin.totalPage_;
        currentPage_ = origin.currentPage_;
}

int main() {
    Book webBook("HTML", 300);
    Book newBook(webBook);

    cout << newBook.title_ << endl << newBook.totalPage_ << endl;
    return 0;
}