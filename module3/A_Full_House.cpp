#include <bits/stdc++.h>

using namespace std;

int main(){

    int count[14]={};
    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
        count[a[i]]++;
    }

    bool has3=false;
    bool has2=false;

    for(int i=0;i<14;i++){
        if(count[i]==3)has3=true;
        if(count[i]==2)has2=true;
    }

    if(has3&&has2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}