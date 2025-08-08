#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n]; 
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = a[0] - 1; // first cell gets first visit for free

        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                ans += (a[i] - a[i - 1]);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
