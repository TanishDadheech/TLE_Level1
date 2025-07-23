#include <iostream>
using namespace std;

int main() {
    int t;

    cin>>t;

    for(int i=0; i<t; i++){
        int n,k;

        cin>>n>>k;

        string s[n];

        for(int j=0;j<n;j++){
            cin>>s[j];
        }
        
        int c=1;

        for(int j=1;j<n;j++){
            if(s[0]==s[j])
              c++;
        }

        cout<<c<<endl;

    }

    return 0;
}
