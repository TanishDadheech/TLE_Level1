#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    int n;

    while(tc--){
        cin>>n;
        int a[n+1];

        for(int i=1;i<=n;i++) cin>>a[i];

        long long count=0; //to count the number of zeroes.
        long long sum=0; //to take the sum of elements  till n-1.
        bool flag=false; //to check the first element after the leading zeroes.

        for(int i=1;i<n;i++){
            
            sum+=a[i];
            if(a[i]>0) flag=true; //conditin to check the first element after leading zeros.
            if(a[i]==0 && flag==true) count++; //to check that if zero is inbetween and not the leading one.
        }

        cout<< sum+count << endl;
        
    }
}