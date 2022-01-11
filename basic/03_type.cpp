#include <iostream>

using namespace std;


/*
    명시적 타입 변환
    1. (변환할 타입) 변환할데이터
    2. 변환할 타입 (변환할데이터)
*/



int main() {
    int num1 = 1;
    int num2 = 4;

    double result1 = num1 / num2;
    double result2 = (double) num1 / num2;
    double result3 = double (num1) / num2;

    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    return 0;
}