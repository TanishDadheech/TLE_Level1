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

        vector<pair<int,int>> arr; // {ai, index}
        arr.reserve(n);

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            arr.push_back({a, i});
        }

        // Sort by visits descending
        sort(arr.begin(), arr.end(), [](auto &x, auto &y) {
            return x.first > y.first;
        });

        vector<long long> coord(n+1);
        coord[0] = 0; // HQ at 0
        long long totalTime = 0;

        int right = 1, left = -1;

        for (int i = 0; i < n; i++) {
            int idx = arr[i].second;   // building index
            int visits = arr[i].first; // ai

            if (i % 2 == 0) { // place to the right
                coord[idx] = right;
                totalTime += 2LL * visits * right;
                right++;
            } else {          // place to the left
                coord[idx] = left;
                totalTime += 2LL * visits * (-left);
                left--;
            }
        }

        cout << totalTime << "\n";
        for (int i = 0; i <= n; i++) {
            cout << coord[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
