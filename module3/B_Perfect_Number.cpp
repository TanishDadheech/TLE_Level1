#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int found=0;
    int num=19;

    while(found!=n){
        int sum=0;
        int pnum=num;

        while(pnum>0){
            sum+=(pnum%10);
            pnum=(pnum/10);
        }

        if(sum==10){
            found++;
        }

        num++;

    }

    cout<<num-1<<endl;

    return 0;
}
