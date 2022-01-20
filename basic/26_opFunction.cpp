#include <iostream>
using namespace std;

class Position {
private:
    double x_;
    double y_;
public:
    Position(double x, double y);
    void Display();
    Position operator-(const Position& other);
};

int main() {
    Position pos1 = Position(8, 8);
    pos1.Display();
    Position pos2 = Position(10, 10);
    pos2.Display();
    Position pos3 = pos1 - pos2;

    pos3.Display();

    return 0;
}

Position::Position(double x, double y) {
    x_ = x;
    y_ = y;
}

Position Position::operator-(const Position& other) {
    return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
}

void Position::Display() {
    cout << "(" << this->x_ << ", " << this->y_ << ")" << endl;
}

