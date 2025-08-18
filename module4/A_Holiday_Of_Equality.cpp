#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //This is the traditional way to find the maximum value in an array.
    // int maxi=INT_MIN;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi)
    //         maxi=arr[i];
    // }

    //Another and efficient way
    int maxi=*max_element(arr,arr+n); //Will find the maximum element from the whole array.

    int ans=0;

    for(int i=0;i<n;i++){
        ans+= maxi-arr[i];
    }

    cout<<ans<<endl;

    return 0;
}
