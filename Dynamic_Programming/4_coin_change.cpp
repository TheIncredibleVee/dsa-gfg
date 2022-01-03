#include<bits/stdc++.h>

using namespace std;

int coinchange(vector<int> &coins, int n, int sum){
    vector<vector<int> > dp(sum+1, vector<int>(n+1,0));
    for(int i=0;i<=sum;++i){
        dp[i][0]= 0;
    }
    for(int i=0;i<=n;++i){
        dp[0][i]=1;
    }
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;++j){
            dp[i][j]=dp[i][j-1];
            if(i>=coins[j-1]){
                dp[i][j]+=dp[i-coins[j-1]][j];
            }
        }
    }
    return dp[sum][n];
}


int main(){
    int n;
    cin>>n;
    int sum;
    vector<int> coins(n,0);
    for(int i=0;i<n;++i){
        cin>>coins[i];
    }
    cin>>sum;
    cout<<coinchange(coins, n, sum);
    return 0;
}