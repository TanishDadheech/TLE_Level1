#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int hr=21;
    int m[2];

    if(n<60){
        for(int i=1;i>=0;i--){
            m[i]=n%10;
            n/=10;
        }
    }else{
        hr=22;
        int min=n-60;

        for(int i=1;i>=0;i--){
            m[i]=min%10;
            min/=10;
        }
    }

    cout<<hr<<":"<<m[0]<<m[1]<<endl;
}