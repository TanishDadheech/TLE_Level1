#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int val1=0,val2=0;

    val1=n%5;
    val2= 5-(val1);

    if(val1<val2){
        cout<<n-val1<<endl;
    }
    else
        cout<<n+val2<<endl;
}