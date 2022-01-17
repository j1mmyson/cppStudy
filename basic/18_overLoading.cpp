#include <iostream>
#include <string>
using namespace std;

void Display(const string, int);
void Display(const string, const string);

int main() {
    Display("Hello", 3);
    Display("Hello", "C++");

    return 0;
}

void Display(const string s, int n) {
    for (int i=0; i<n; i++) {
        cout << s << endl;
    }
    return ;
}

void Display(const string s1, const string s2) {
    cout << s1 << " " << s2 << endl;
    return ;
}
