#include <iostream>

using namespace std;

int main() {

    int x = 7;
    int* xp = &x;

    *xp = 5;

    cout << &x << endl;
    cout << xp << endl;
    cout << &xp << endl;
    cout << *xp << endl;
    cout << x << endl;

    cout << "size of pointer var: " << sizeof(xp) << endl;

    return 0;
}