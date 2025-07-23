#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    //now we will just declare and count all the required.

    int even=0,odd=0,pos=0,neg=0;

    for(int i=0; i<n; i++){
        if(num[i]%2==0)
            even++;
        else
            odd++;

        if(num[i]>0)
            pos++;
        else if(num[i]<0)
            neg++;
    }

    cout<<"Even: "<< even<<endl;
    cout<<"Odd: "<< odd<<endl;
    cout<<"Positive: "<< pos<<endl;
    cout<<"Negative: "<< neg<<endl;
}