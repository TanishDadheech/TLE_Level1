#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    // sort(s.begin(),s.end());
    // cout<<s<<"\n";
    //This method works but there is another method also which is good to know and important conceot to understand also uses the frequency array.

    int n=s.size();
    int arr[26]={};//frequency array.

    for(int i=0;i<n;i++)
        arr[s[i]-'a']++;

    string ans="";
    for(int i=0;i<26;i++){
        char ch= i+'a';;

        while(arr[i]>0){
            ans+=ch;
            arr[i]--;
        }
    }

    cout<<ans<<endl;

    return 0;
}
