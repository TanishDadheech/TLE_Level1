#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int op[n]; //opinion array

    for(int i=0;i<n;i++){
        cin>>op[i];
    }

    bool flag=0; //flag to counter the hard problem (1)

    for(int i=0;i<n;i++){
        if(op[i]==1)
            flag=1; //if hard => 1
    }

    if(flag==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

}