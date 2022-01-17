#include <iostream>

using namespace std;

int recursiveSum(int n) {
    if (n == 1) return 1;

    return n + recursiveSum(n-1);
}

int sum(int n) {
    int result = 0;

    for (int i=1; i<=n; i++) {
        result += i;
    }
    return result;
}

int main() {
    cout << recursiveSum(10) << endl;
    cout << sum(10) << endl;
    return 0;
}