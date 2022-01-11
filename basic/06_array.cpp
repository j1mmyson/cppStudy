#include <iostream>

using namespace std;


void printArray (int arr[3], int len) {
    cout << "len: " << len << " ";

    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return;
}
// type var_name[length];
// ex) int arr[3];
// C++에서 배열을 함수의 인자로 전달할때에는 포인터값을 전달해주기 때문에 추가로 배열의 길이를 알 수 있는 인자를 전달해주어야 한다.
int main() {
    int arr1[5];
    int arr2[3] = {33};

    // c++11 이상에서 가능한 배열 선언식 (= 생략)
    int slice[] {22, 2, 3, 4, 5};

    cout << "slice's length: " << sizeof(slice)/sizeof(slice[0]) << endl;

    cout << arr1 << " " << arr2 << " " << slice << endl;
    printArray(arr1, sizeof(arr1)/sizeof(arr1[0]));
    printArray(arr2, sizeof(arr2)/sizeof(arr2[0]));
    printArray(slice, sizeof(slice)/sizeof(slice[0]));

    int arr3[3][4] = {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34},
    };
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    int rowLength = sizeof(arr3) / sizeof(arr3[0]);
    int colLength = sizeof(arr3) / rowLength / sizeof(arr3[0][0]);

    cout << rowLength << "행 " << colLength << "열" << endl;

    // 행은 생략가능하지만 열은 생략할 수 없음!
    int arr4[][4] = {
        {11, 12, 13, 14},
        {21, 22, 23},
        {31, 32},
    };

    for(int i=0; i < (sizeof(arr4)/sizeof(arr4[0])); i++) {
        for (int j=0; j < 4; j++) {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }

    // slice[4] = 5;
    // cout << "slice: " << slice << endl;

    return 0;
}