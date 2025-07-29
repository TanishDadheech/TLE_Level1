#include <bits/stdc++.h>

using namespace std;

int main(){
   int tc,n;

   cin>>tc;

   while(tc--){

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    if(n==1){ 
        cout<<"0"<<endl;
        continue;;
    }

    int ops=0;

    for(int i=0;i<n-1;i++){
       if(a[i]%2==0){
        if(a[i+1]%2==0)
            ops++;
       }else{
        if(a[i+1]%2!=0)
            ops++;
       }
   }

   //The whole for loop can be shrinked by this line (a[i]%2)==(a[i+1]%2). !!KEEP IN MIND TO OPTIIMISE THE CONDITIONS.

   cout<<ops<<endl;
 }
}