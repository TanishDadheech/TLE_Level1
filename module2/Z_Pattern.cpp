#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        //first and the last row

            for(int j=0;j<n;j++){

                if(i==0||i==n-1){
                    cout<<"*";
                }else if(j==n-i-1){
                        cout<<"*";
                        }
                    else{
                        cout<<" ";
                    }
            }
            cout<<endl;
        


    }
}