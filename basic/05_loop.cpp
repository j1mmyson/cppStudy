#include <iostream>

using namespace std;

int main() {
    int i = 0;

    while (i < 10) {
        cout << i + 1 << " times" << endl;
        i ++;
    }

    i = 0;

    do {
        cout << i << " times" << endl;
        i++;
    } while(i < 10);

    cout << "i: " << i << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << " times" << endl;
    }

    cout << "i: " << i << endl;
    
    return 0;
}