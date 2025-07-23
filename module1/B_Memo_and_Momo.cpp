#include <iostream>

using namespace std;

int main(){

    unsigned long long a,b,k;

    cin>>a>>b>>k;

    if(a%k==0){
        if(b%k==0)
            cout<<"Both"<<endl;
        else
            cout<<"Memo"<<endl;
    }
    else if(b%k==0){
        cout<<"Momo"<<endl;
    }
    else
    cout<<"No One"<<endl;
    


return 0;
}