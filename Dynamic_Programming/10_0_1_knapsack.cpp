#include <bits/stdc++.h>

using namespace std;

int knapsack(vector<int> &val,vector<int> &weights,int n,int W){
    vector<vector<int> > dp(W+1,vector<int>(n+1,0));
    for(int i=0;i<=W;i++){
        for(int j=0;j<=n;++j){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else{
                if(i>=weights[j-1]){
                    dp[i][j]= max(dp[i][j-1],val[j-1]+dp[i-weights[j-1]][j-1]);
                }
                else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
    }
    return dp[W][n];
}



int main(){
    int n;
    cin>>n;
    vector<int> val(n,0);
    vector<int> weights(n,0);
    for(int i=0;i<n;++i){
        cin>>weights[i];
        cin>>val[i];
    }
    int W;
    cin>>W;
    cout<<knapsack(val, weights,n,W);
}