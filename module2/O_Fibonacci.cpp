#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    // Base cases(This is the rookie and extensive method)
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 1 << endl;
        return 0;
    }

    long long a = 0, b = 1, fib;

    for (int i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << b << endl;

    return 0;
}
