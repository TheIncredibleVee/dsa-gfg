#include <bits/stdc++.h>

using namespace std;

int maxSum(vector<int> &arr, int n){
    vector<int> dp(n+1,0);
    dp[1]=arr[0];
    dp[2] = max(arr[0], arr[1]);
    for(int i=3;i<=n;++i){
        dp[i]= max(dp[i-1], dp[i-2]+arr[i-1]);
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<maxSum(arr, n)<<endl;
    return 0;
}