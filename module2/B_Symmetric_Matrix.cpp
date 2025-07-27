#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    int n,m;

    while(tc--){
        
        cin>>n>>m;
        
        int a1[n],a2[n],a3[n],a4[n];
         bool foundSymmetricTile = false;

        for(int i=0;i<n;i++){
            cin>>a1[i]>>a2[i]>>a3[i]>>a4[i];

            if(a2[i]==a3[i])
            foundSymmetricTile=true; //Checking that if only one diagonal also is there then it will be possible.
        }

        if(m%2!=0 || foundSymmetricTile==false)
            cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
    }
}

