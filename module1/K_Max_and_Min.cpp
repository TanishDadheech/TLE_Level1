#include <iostream>

using namespace std;

int main(){

    int a,b,c,min,max;

    cin>>a>>b>>c;

    min=0;
    max=0;

    if((a>b)&&(a>c)){
        max=a;
        if(b>c)
            min=c;
        else
            min=b;
    }
    else if((b>c)){
        max=b;
        if(a>c)
            min=c;
        else
            min=a;
    }
    else{
        max=c;
        if(a>b)
            min=b;
        else
            min=a;
    }

    cout<<min<<" "<<max<<endl;


return 0;
}