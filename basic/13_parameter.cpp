#include <iostream>

using namespace std;

void callByValue(int v) {
    v += 10;
    
    return ;
}

void callByReference(int& v) {
    v += 10;

    return ;
}

int main() {
    int num = 10;

    callByValue(num);
    cout << "num: " << num << endl;

    callByReference(num);
    cout << "num: " << num << endl;

    return 0;
}