#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    long long A[1000], B[1000]; // since N, M ≤ 1000

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    bool possible = true;

    for (int i = 0; i < M; i++) {
        bool found = false;
        for (int j = 0; j < N; j++) {
            if (A[j] == B[i]) {
                A[j] = -1; // mark as used
                found = true;
                break;
            }
        }
        if (!found) {
            possible = false;
            break;
        }
    }

    cout << (possible ? "Yes" : "No") << "\n";
    return 0;
}
