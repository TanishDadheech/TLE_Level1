#include <bits/stdc++.h>

using namespace std;

int main(){
   int t,n;

   cin>>t;

   for(int i=0;i<t;i++){
    cin>>n;
    int a[n],odd=0,even=0;

    for(int j=0;j<n;j++){
        cin>>a[j];
    }

    if(n==1&&a[0]%2!=0){
        cout<<"-1"<<endl;
        continue;
    }

    for(int k=0;k<n;k++){
        if(k%2==0){
            if(a[k]%2!=0)
                odd++;
        }else{
            if(a[k]%2==0)
                even++;
        }
    }

    if(odd==even)
        cout<<even<<endl;
    else
        cout<<"-1"<<endl;

   }
}