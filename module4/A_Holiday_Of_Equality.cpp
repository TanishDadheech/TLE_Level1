#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>maxi)
            maxi=arr[i];
    }

    int ans=0;

    for(int i=0;i<n;i++){
        ans+= maxi-arr[i];
    }

    cout<<ans<<endl;

    return 0;
}
