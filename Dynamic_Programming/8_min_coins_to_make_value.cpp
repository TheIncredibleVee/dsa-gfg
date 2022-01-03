#include <bits/stdc++.h>

using namespace std;

int min_coins(vector<int> &arr, int n, int val){
    vector<int> dp(val+1, INT_MAX);
    dp[0]=0;
    for(int i=1;i<=val;++i){
        dp[i]=INT_MAX;
        for(int j=0;j<n;++j){
            if(i>=arr[j] && dp[i-arr[j]]!=INT_MAX){
                dp[i]=min(dp[i],1+dp[i-arr[j]]);
            }
        }
    }
    return dp[val];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    cout<<min_coins(arr,n,val);
    return 0;
}