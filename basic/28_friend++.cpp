#include <iostream>
#include <cmath>
using namespace std;
class Rect;

class Display {
public:
    void showSize(const Rect& target);
    void showDiagonal(const Rect& target);
};

class Rect {
private:
    double height_;
    double width_;
public:
    Rect(double height, double width);
    void height() const;
    void width() const;
    friend void Display::showDiagonal(const Rect& target);
};

int main() {
    Rect rect(10, 20);

    Display dp;
    dp.showSize(rect);
    dp.showDiagonal(rect);

    return 0;
}

Rect::Rect(double height, double width) {
    height_ = height;
    width_ = width;
}

void Rect::height() const {
    cout << "Height: " << height_ << endl;
}

void Rect::width() const {
    cout << "Width: " << width_ << endl;
}

void Display::showSize(const Rect& target) {
    target.height();
    target.width();
}

void Display::showDiagonal(const Rect& target) {
    double diagonal;
    diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));

    cout << "Diagonal: " << diagonal << endl;
}

