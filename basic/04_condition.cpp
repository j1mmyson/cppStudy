#include <iostream>

using namespace std;

int main() {
    int num = 10;

    if(num < 0) {
        cout << "less than 0." << endl;
    } else if(num < 10) {
        cout << "less than 10." << endl;
    } else {
        cout << "bigger than 10." << endl;
    }

    switch (num > 10) {
    case true:
        cout << "bigger than 10" << endl;
        break;
    case false:
        cout << "smaller than 10" << endl;
        break;
    default:
        cout << "num is 10" << endl;
        break;
    }

    (num > 10) ? cout << "3: more than 10" << endl : cout << "num <= 10" << endl;

    return 0;
}