#include <iostream>
#define SQR(X) (X) * (X)

using namespace std;

inline int Sqr(int x) { return x * x; }

int main() {
    int x = 5;

    cout << Sqr(10) << endl;
    cout << Sqr(x) << endl;
    cout << Sqr(x+3) << endl;
    cout << SQR(5) << endl;
    cout << SQR(x+3) << endl;

    return 0;
}