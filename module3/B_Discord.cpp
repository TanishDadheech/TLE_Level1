#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // To mark adjacent pairs
    bool adj[51][51] = {false};

    for (int i = 0; i < M; ++i) {
        int a[51];
        for (int j = 0; j < N; ++j) {
            cin >> a[j];
        }
        // Mark adjacent pairs in this photo
        for (int j = 0; j < N - 1; ++j) {
            int x = a[j];
            int y = a[j + 1];
            adj[x][y] = true;
            adj[y][x] = true;
        }
    }

    int count = 0;
    // Count unordered pairs (i < j) that never stood adjacent
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            if (!adj[i][j]) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;

    //This is a far better soltution than any of the vieos i have seen stick with it.
    //The imoprtant thing here is while taking input for each row we are marking another matrix as true for it's adjacent pairs. That is really easy and helpful.
}
