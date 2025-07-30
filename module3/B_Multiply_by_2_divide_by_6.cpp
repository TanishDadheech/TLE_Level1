#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        long long n;
        cin >> n;
        int ops = 0;
        bool possible = true;

        while(n != 1){
            if(n % 3 != 0){
                possible = false;
                break;
            }
            if(n % 6 == 0){
                n /= 6;
                ops++;
            } else {
                n *= 2;
                ops++;
            }
        }

        if(possible){
            cout << ops << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
