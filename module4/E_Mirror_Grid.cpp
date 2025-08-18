#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; 
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long ans = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // the 4 rotated positions
                int x1 = i,         y1 = j;
                int x2 = j,         y2 = n - 1 - i;
                int x3 = n - 1 - i, y3 = n - 1 - j;
                int x4 = n - 1 - j, y4 = i;

                // process the orbit only once: when (i,j) is lexicographically smallest
                int bx = x1, by = y1;
                auto upd = [&](int x, int y) {
                    if (x < bx || (x == bx && y < by)) { bx = x; by = y; }
                };
                upd(x2, y2); upd(x3, y3); upd(x4, y4);
                if (i != bx || j != by) continue;

                int ones = 0;
                if (a[x1][y1] == '1') ++ones;
                if (a[x2][y2] == '1') ++ones;
                if (a[x3][y3] == '1') ++ones;
                if (a[x4][y4] == '1') ++ones;

                ans += min(ones, 4 - ones);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
    