#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;

    int n,h,m;

    while(tc--){
        cin>>n>>h>>m;   

        int sleep_time= h*60 + m; //converting sleep time into minutes.
        int ans=INT_MAX;

        int hi,mi;

        for(int i=0;i<n;i++){
            cin>>hi>>mi;

            int alarm_time= hi*60+mi;

            int diff = alarm_time-sleep_time;

            if(diff<0)
                diff+=1440; //to adjust the 24hr format as 24hr = 1440 min.

            ans=min(ans,diff);
        }

        cout<<ans/60<<" "<<ans%60<<endl;
    }
}