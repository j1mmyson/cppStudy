#include <iostream>
using std::cout;
using std::endl;

class Book {
    private:
        int currentPage;
        void setPercent();
        void Move(int page) { currentPage = page; }
    public:
        int totalPage;
        void show() { cout << currentPage << endl; }
        void setPage(int p) { currentPage = p; }
};

int main() {
    Book b1;
    b1.show();
    b1.setPage(5);
    b1.show();

    return 0;
}