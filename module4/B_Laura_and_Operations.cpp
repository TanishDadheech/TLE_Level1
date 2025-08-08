#include <bits/stdc++.h>
using namespace std;

int is_possible(int x,int y, int z){
    if(y%2==z%2)
        return 1;
    return 0;
}

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans[3]={0,0,0};

    ans[0]=is_possible(a,b,c);
    ans[1]=is_possible(b,a,c);
    ans[2]=is_possible(c,a,b);

    for(auto it: ans)
        cout<<it<<" ";
    cout<<"\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {

        solve();

    }

    return 0;
}
