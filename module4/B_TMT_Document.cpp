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
        string s;
        cin >> s;

        int countT = 0, countM = 0;
        for (char c : s) {
            if (c == 'T') countT++;
            else countM++;
        }

        // Basic necessary condition
        if (countT != 2 * countM) {
            cout << "NO\n";
            continue;
        }

        // Left to right check
        int tcount = 0, mcount = 0;
        bool ok = true;
        for (char c : s) {
            if (c == 'T') tcount++;
            else mcount++;
            if (mcount > tcount) {
                ok = false;
                break;
            }
        }

        // Right to left check
        tcount = 0, mcount = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'T') tcount++;
            else mcount++;
            if (mcount > tcount) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
