#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;

    //9 and 8 are being chosen because they are the first pair of consecutive composite numbers from the starting. 2 and 4 are not consecutive.
    long long a=n*9,b=n*8;

    cout<<a<<" "<<b<<endl;


    return 0;
}
