#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        int winCount = 0;

        int sa[2], sb[2];
        for (int i = 0; i < 2; i++) {
            sa[0] = a[i];
            sa[1] = a[1 - i];
            for (int j = 0; j < 2; j++) {
                sb[0] = b[j];
                sb[1] = b[1 - j];

                int suneetWins = 0, slavicWins = 0;

                for (int r = 0; r < 2; r++) {
                    if (sa[r] > sb[r]) suneetWins++;
                    else if (sa[r] < sb[r]) slavicWins++;
                }

                if (suneetWins > slavicWins)
                    winCount++;
            }
        }

        cout << winCount << endl;
    }

    return 0;
}
