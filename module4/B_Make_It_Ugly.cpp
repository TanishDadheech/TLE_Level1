#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // If already not beautiful
        if (a.front() != a.back()) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> v1; // was vector<int> v1(n) which adds extra 0s
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == a[0]) count++;
            else v1.push_back(count), count = 0;
        }

        if (count > 0) v1.push_back(count);

        sort(v1.begin(), v1.end()); // fixed sort(all(v1))
        if (v1.size() == 1)         // fixed v1.size == 1
            cout << -1 << endl;
        else
            cout << v1[0] << endl;
    }
}
