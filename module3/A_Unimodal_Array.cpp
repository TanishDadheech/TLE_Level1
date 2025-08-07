#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];  // max size as per constraints

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 1;

    // Step 1: strictly increasing
    while (i < n && a[i] > a[i - 1]) i++;

    // Step 2: constant
    while (i < n && a[i] == a[i - 1]) i++;

    // Step 3: strictly decreasing
    while (i < n && a[i] < a[i - 1]) i++;

    if (i == n) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
