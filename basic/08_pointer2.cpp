#include <iostream>

using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* parr = arr;

    cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;


    return 0;
}