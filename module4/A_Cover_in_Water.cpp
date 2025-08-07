#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;

        bool flag=false;
        int count=0;
        
        string s;
        cin>>s;

        for(int i=1;i<=n-2;i++){
            if(s[i-1] == '.' && s[i] == '.' && s[i+1]=='.'){
            flag=true;
            break;
            }
        }

        if(flag){
            cout<<"2"<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(s[i]== '.') count++;
            }

            cout<<count<<endl;
        }


    }

    return 0;
}
