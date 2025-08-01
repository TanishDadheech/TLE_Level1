#include <iostream>
using namespace std;

const int MAX = 30;
int H, W;
char A[MAX][MAX], B[MAX][MAX], temp[MAX][MAX];

bool isEqual(char a[MAX][MAX], char b[MAX][MAX]) {
    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            if (a[i][j] != b[i][j])
                return false;
    return true;
}

int main() {
    cin >> H >> W;
    
    // Input grid A
    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            cin >> A[i][j];

    // Input grid B
    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            cin >> B[i][j];

    // Try all vertical and horizontal shifts
    for (int s = 0; s < H; ++s) { // vertical shifts
        for (int t = 0; t < W; ++t) { // horizontal shifts

            // Copy and shift A into temp
            for (int i = 0; i < H; ++i) {
                for (int j = 0; j < W; ++j) {
                    int new_i = (i + s) % H;
                    int new_j = (j + t) % W;
                    temp[i][j] = A[new_i][new_j];
                }
            }

            // Compare shifted A with B
            if (isEqual(temp, B)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    // No match found
    cout << "No" << endl;
    return 0;

    //This can also be done by iterating over all the possibilities of s,t and comparing the positions by the formula (i,j)= [(i+s)%H], [(j+t)%W]
}
