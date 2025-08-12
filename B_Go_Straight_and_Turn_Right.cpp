#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string T;
    cin >> T;

    long long x = 0, y = 0;
    char dir = 'E'; // E, S, W, N

    for (char c : T) {
        if (c == 'S') {
            if (dir == 'E') x++;
            else if (dir == 'S') y--;
            else if (dir == 'W') x--;
            else if (dir == 'N') y++;
        } else if (c == 'R') {
            if (dir == 'E') dir = 'S';
            else if (dir == 'S') dir = 'W';
            else if (dir == 'W') dir = 'N';
            else if (dir == 'N') dir = 'E';
        }
    }

    cout << x << " " << y << "\n";
    return 0;
}
