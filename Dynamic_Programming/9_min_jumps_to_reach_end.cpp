#include<bits/stdc++.h>

using namespace std;

int min_jumps(vector<int> &arr, int n){
    vector<int> dp(n+1, INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;++i){
        for(int j=0;j<i;++j){
            if(j+arr[j]>=i && dp[j]!=INT_MAX){
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    return dp[n];

}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i =0; i<n;++i){
        cin>>arr[i];
    }
    cout<<min_jumps(arr,n);
    return 0;
}