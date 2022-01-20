#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
        Book(const string& title, int totalPage);
        string title_;
        int totalPage_;
        const Book& ThickerBook(const Book&);
};

int main() {
    Book htmlBook("HTML", 350);
    Book webBook("WEB", 200);

    cout << htmlBook.ThickerBook(webBook).title_ << endl;
    cout << webBook.ThickerBook(htmlBook).title_ << endl;

    return 0;
}

Book::Book(const string& title, int totalPage) {
    title_ = title;
    totalPage_ = totalPage;
}

const Book& Book::ThickerBook(const Book& compBook) {
    if (compBook.totalPage_ > totalPage_) {
        return compBook;
    }
    return *this;
}