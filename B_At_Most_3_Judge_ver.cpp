#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, W;
    cin >> N >> W;

    int A[305];               // since N ≤ 300
    bool good[1000005] = {0}; // since W ≤ 10^6

    for (int i = 0; i < N; i++) cin >> A[i];

    // 1 weight
    for (int i = 0; i < N; i++) {
        if (A[i] <= W) good[A[i]] = true;
    }

    // 2 weights
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            long long sum = 1LL * A[i] + A[j];
            if (sum <= W) good[sum] = true;
        }
    }

    // 3 weights
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                long long sum = 1LL * A[i] + A[j] + A[k];
                if (sum <= W) good[sum] = true;
            }
        }
    }

    int ans = 0;
    for (int n = 1; n <= W; n++) {
        if (good[n]) ans++;
    }

    cout << ans << "\n";
    return 0;
}
