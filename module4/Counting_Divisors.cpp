#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin>>x;

        int ans=0;

        for(int i=1;i<=sqrt(x);i++){
            if(x%i==0)
                ans++;
            if(x/i!=i)
                ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
