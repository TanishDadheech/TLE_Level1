#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc=0;
    cin>>tc;

    int n=0,a=0,b=0;

    while(tc--){
        cin>>n>>a>>b;

        // if((n-(a+b)<=1) && n!=1)
        //     cout<<"No"<<endl;
        // else
        //     cout<<"Yes"<<endl; THIS doesnt work in the case n=5 a=3 b=3 where a+b > n so the correct answer is: a+b<n or a+b <= n-1

        if((n==a && a==b)||(a+b+1<n))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}