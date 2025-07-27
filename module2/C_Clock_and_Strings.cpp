#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    while(tc--){
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        if(a>b) swap(a,b);
        if(c>d) swap(c,d);

        //Imagine a clock after swaaaping and this conddition then will become more intuitive in nature that 
        //either:  "c" should be between "a" and "b" and "d" should be greater than b or less than a
        // or  : "c" should be less than "a" or greater than  "b" and "d" should be between a and b
        // (a < c && c < b && (d < a || d > b)) ||
        //    (a < d && d < b && (c < a || c > b));
        if(
            (c>a&&c<b&&(d<a||d>b) || 
            (d>a&&d<b&&(c<a||c>b)))   
        ) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    //This can be done more efficiently using advanced DS like sets and all but for now this is fine as i have just started wit CP.
}