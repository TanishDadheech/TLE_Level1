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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Necessary condition
        if (a.back() == 1) {
            cout << "NO\n";
            continue;
        }

        // Build p_n ... p_1 by reversing the process:
        // at each step: find leftmost 0, flip prefix before it, remove that 0.
        vector<int> cur = a;
        vector<int> p_rev;       // p_n, p_{n-1}, ..., p_1
        p_rev.reserve(n);

        for (int len = n; len >= 1; --len) {
            int pos = -1;
            for (int i = 0; i < len; ++i) {
                if (cur[i] == 0) { pos = i; break; }
            }
            if (pos == -1) {              // no zero -> impossible
                p_rev.clear();
                break;
            }
            // record p_len = pos (since pos is 0-indexed; in problem it's p_len = pos)
            p_rev.push_back(pos);

            // flip prefix [0..pos-1]
            for (int i = 0; i < pos; ++i) cur[i] ^= 1;

            // remove element at pos (that zero)
            cur.erase(cur.begin() + pos);
        }

        if (p_rev.empty() && n > 0 && a.back() == 0 && !(n == 0)) {
            // Should not happen with the logic above, but safe-guard.
            cout << "NO\n";
            continue;
        }

        // Reverse to get p_1..p_n
        reverse(p_rev.begin(), p_rev.end());

        cout << "YES\n";
        for (int i = 0; i < (int)p_rev.size(); ++i) {
            cout << p_rev[i] << (i + 1 == (int)p_rev.size() ? '\n' : ' ');
        }
    }
    return 0;
}
