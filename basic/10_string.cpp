#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, address;

    cout << "name: ";
    getline(cin, name);
    // cin >> name;
    cout << "address: ";
    getline(cin, address);
    // cin >> address;

    cout << address << " " << name << endl;

    string str1 = "string 1zz";

    cout << str1 << " " << str1.length() << endl;
    cout << str1[2] << endl;

    string str2 = str1;
    cout << str1 << endl;

    return 0;
}