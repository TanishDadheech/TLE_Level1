#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    int n;

    while(tc--){
        cin>>n;
        int a[n];

        int freq[101]={0};

        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }

        int mexa=0,mexb=0;

        while(freq[mexa]>=1) mexa++;

        while(freq[mexb]>=2) mexb++;

        cout<<mexa+mexb<<endl;
    }

}