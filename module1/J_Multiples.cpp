#include <iostream>

using namespace std;

int main(){

    int A=0,B=0;
    cin>>A>>B;

    if((A%B==0)||(B%A==0))
        cout<<"Multiples";
    else
        cout<<"No Multiples";


}