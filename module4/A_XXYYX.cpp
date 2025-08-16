#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, A,B,C,D;
    cin >> N >> A >> B >> C >> D;

    bool ans=false;

    if(abs(B-C)<=1){
        if((A!=0)&&(D!=0)){
            if(B>0 || C>0)
                ans=true;
        }else{
            ans=true;
        }
    }

    if(ans)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}

//Better and more cleaner version is below.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long N, A, B, C, D;
//     cin >> N >> A >> B >> C >> D;

//     // 1) Total pairs must match N-1
//     if (A + B + C + D != N - 1) {
//         cout << "No\n";
//         return 0;
//     }

//     // 2) Transitions XY and YX can differ by at most 1
//     if (llabs(B - C) > 1) {
//         cout << "No\n";
//         return 0;
//     }

//     // 3) If there are no transitions, the string is all X or all Y
//     if (B == 0 && C == 0 && A > 0 && D > 0) {
//         cout << "No\n";
//         return 0;
//     }

//     cout << "Yes\n";
//     return 0;
// }
