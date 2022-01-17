#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int price;
};

void swap(int&, int&);
void displayBook(Book);
void editBook(Book&);

int main() {

    int num = 5;
    int num2 = 99;
    int& rnum = num;

    cout << num << endl;
    rnum ++;
    cout << num << endl;

    swap(num, num2);
    cout << num << " " << num2 << endl;

    Book book;
    book.title = "Hello";
    book.author = "byungwook";
    book.price = 3000;

    displayBook(book);
    editBook(book);
    displayBook(book);
    return 0;
}

void swap(int& n1, int& n2) {
    int temp = 0;
    temp = n1;
    n1 = n2;
    n2 = temp;
    
    return ;
}

void displayBook(Book b) {


    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;

    b.author = "zzzz"; // call by value라서 바뀌지 않음 

    return ;
}

void editBook(Book& b) {
    b.title = "changed";
    return ;
}