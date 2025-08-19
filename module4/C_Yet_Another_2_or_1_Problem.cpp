#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        string s;
        cin >> n >> k >> s;

        while (k > 0) {
            const int m = (int)s.size();

            // Check palindrome and "all same" in one pass
            bool pal = true;
            bool allsame = true;
            char c0 = s[0];
            int l = 0, r = m - 1;
            while (l < r) {
                if (s[l] != s[r]) pal = false;
                if (s[l] != c0 || s[r] != c0) allsame = false;
                ++l; --r;
            }
            if (m % 2 == 1) {
                if (s[l] != c0) allsame = false; // middle char
            }

            if (!pal) {
                // not palindrome: one step = take floor(m/2)
                s.resize(m / 2);
                --k;
                continue;
            }

            // palindrome
            if (allsame) {
                // append last char k times in one go
                s.append((size_t)k, s.back());
                k = 0;
                break;
            }

            if (k == 1) {
                // just append last char once
                s.push_back(s.back());
                k = 0;
                break;
            }

            // k >= 2 and palindrome but not all same:
            // two steps compress to ceil(m/2)
            s.resize((m + 1) / 2);
            k -= 2;
        }

        cout << s << "\n";
    }
    return 0;
}
