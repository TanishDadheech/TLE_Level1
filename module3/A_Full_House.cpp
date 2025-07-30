#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int count1=1;
    int count2=1;

    for(int i=2;i<5;i++){
        if(a[i]==a[0])
            count1++;
        if(a[i]==a[1])
            count2++;
    }

    if((count1+count2==5))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}