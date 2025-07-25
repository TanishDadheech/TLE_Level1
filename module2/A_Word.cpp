#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int count_upper=0,count_lower=0;

    for(int i=0; i<s.length(); i++){
        if(islower(s[i]))
            count_lower++;
        else
            count_upper++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (count_upper > count_lower) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
}