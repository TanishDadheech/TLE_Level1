#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    //Now we want to print pairs of distinct integers from the array.

    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            cout<<num[i]<<","<<num[j]<<" ";
        }
        cout<<endl;
    }
}