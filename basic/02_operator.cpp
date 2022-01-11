#include <iostream>

using namespace std;

int main() {
    int num1 = 1;
    int num2 = 3;
    int result = (num1 > num2) ? num1 : num2;

    cout << num1 << ", " << num2 << "중 더 큰 수는:" << result <<endl;

    cout << sizeof(num1) << endl;
    double dn = 1.15;
    cout << sizeof(dn) << endl;





    return 0;
}