#include <bits/stdc++.h>

using namespace std;

int main(){
    int y,ld;
    cin>>y;

    for(int i=y+1; i<10000; i++){
        int freq[10]={};

        int year=i;

        while(year>0){
            ld=year%10;
            freq[ld]++;
            year/=10;
        }

        bool flag=0;

        for(int j=0;j<10;j++){
            if(freq[j]>1){
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout<<i<<endl;
            break;
        }
    }
}