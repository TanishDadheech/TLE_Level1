#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;

    cin>>n;

    int first_digit=0, no_of_digits=0;
    long long curr_year=n;

    while(n>0){
        if(n/10==0){
            first_digit=n;
        }
        n= n/10;
        no_of_digits++;
    }

    int ans=0;

    ans= (first_digit+1)*pow(10,(no_of_digits-1)) - curr_year;

    cout<<ans<<endl;


}

