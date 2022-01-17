#include <iostream>
using namespace std;

// 
void tempFunc(int, int, int = 10); 

int main() {

    tempFunc(30, 20); // 30, 20, 10
    tempFunc(40, 20, 13); // 40, 20, 13

    return 0;
}

void tempFunc(int x, int y, int z) {
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return ;
}
