#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int maxGap = a[0]; // gap from 0 to first station

        // Check gaps between stations
        for (int i = 0; i < n - 1; i++) {
            maxGap = max(maxGap, a[i + 1] - a[i]);
        }

        // Check doubled gap from last station to x
        maxGap = max(maxGap, 2 * (x - a[n - 1]));

        cout << maxGap << "\n";
    }

    return 0;
}
