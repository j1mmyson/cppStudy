#include <iostream>

using namespace std;

int main() {
    int* pint = new int;
    *pint = 50;

    double* pdouble = new double;
    *pdouble = 77;

    cout << *pint << ": " << pint << endl;
    cout << *pdouble << ": " << pdouble << endl;

    return 0;
}