#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title_;
        int currentPage_ = 1;
        int totalPage_;
        double percent_;
        Book(const string& title, int totalPage);
        void setPercent();
};

int main() {
    Book b1("my title", 5);
    // b1 = Book("my title", 5);

    cout << b1.totalPage_ << endl << b1.currentPage_ << endl;
    cout << b1.percent_ << endl;
    return 0;
}

Book::Book(const string& title, int totalPage) {
    title_ = title;
    totalPage_ = totalPage;
}

void Book::setPercent() {
    percent_ = (double) currentPage_ / totalPage_;
}