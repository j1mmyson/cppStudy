#include <iostream>
#include <string>

using namespace std;

/*
    [Method List]
    length()
    size()
    append()
    find()
    compare()
    replace()
    capacity()
    max_size()
*/

int main() {
    string str1;
    string str2 = "Hello world";

    cout << str1.length() << " " << str1.size() << endl;
    cout << str2.length() << " " << str2.size() << endl;

    str2.append("!!");
    cout << str2 << endl;
    str2.append(2, '@');
    cout << str2 << endl;
    str2.append("fdzz", 0, 3);
    cout << str2 << endl;

    int index = str2.find("world");
    cout << index << endl;
    if (index == string::npos) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at " << index << endl;
    }

    str1 = "Hello world!!@@fdz";
    // str1 = "zz";

    cout << str1 << endl;

    if (str1.compare(str2) == 0) {
        cout << "str1 == str2" << endl;
    } else {
        cout << "str1 != str2" << endl;
    }

    str1 = "Hello world";
    str2 = "world";
    int ind = str1.find(str2);
    if (ind != string::npos) {
        str1.replace(ind, str2.length(), "C++");
    }
    cout << str1 << endl;

    return 0;
}