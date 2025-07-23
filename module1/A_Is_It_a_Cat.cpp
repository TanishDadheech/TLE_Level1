#include <iostream>
using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> s;

        int k = 0, flag = 0;

        while (k < n && (s[k] == 'm' || s[k] == 'M')) {
            flag = 1;
            k++;
        }
        if (flag != 1) {
            cout << "NO" << endl;
            continue;
        }

        while (k < n && (s[k] == 'e' || s[k] == 'E')) {
            flag = 2;
            k++;
        }
        if (flag != 2) {
            cout << "NO" << endl;
            continue;
        }

        while (k < n && (s[k] == 'o' || s[k] == 'O')) {
            flag = 3;
            k++;
        }
        if (flag != 3) {
            cout << "NO" << endl;
            continue;
        }

        while (k < n && (s[k] == 'w' || s[k] == 'W')) {
            flag = 4;
            k++;
        }
        if (flag != 4 || k < n) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}
