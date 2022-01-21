#include <iostream>
using namespace std;

class Rect {
private:
    double height_;
    double width_;
public:
    Rect(double height, double width); // Constructor
    void DisplaySize();
    Rect operator*(double mul) const;
    friend Rect operator*(double mul, const Rect& origin);
};

int main() {
    Rect r1 = Rect(10, 20);
    Rect r2 = r1 * 5;
    Rect r3 = 10 * r1;

    r2.DisplaySize();
    r3.DisplaySize();
    return 0;
}

Rect::Rect(double height, double width) {
    height_ = height;
    width_ = width;
}

void Rect::DisplaySize() {
    cout << "height: " << this->height_ << endl << "width: " << this->width_ << endl;
}

Rect Rect::operator*(double mul) const {
    return Rect(height_ * mul, width_ * mul);
}

Rect operator*(double mul, const Rect& origin) { return origin * mul; }