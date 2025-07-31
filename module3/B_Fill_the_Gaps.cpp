#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[105];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int result[10000]; // large enough
    int idx = 0;

    for (int i = 0; i < n - 1; ++i) {
        result[idx++] = a[i]; // push current element

        // Insert numbers between a[i] and a[i+1]
        if (a[i] < a[i + 1]) {
            for (int val = a[i] + 1; val < a[i + 1]; ++val)
                result[idx++] = val;
        } else if (a[i] > a[i + 1]) {
            for (int val = a[i] - 1; val > a[i + 1]; --val)
                result[idx++] = val;
        }
    }

    result[idx++] = a[n - 1]; // push last element

    // Output the final sequence
    for (int i = 0; i < idx; ++i)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
