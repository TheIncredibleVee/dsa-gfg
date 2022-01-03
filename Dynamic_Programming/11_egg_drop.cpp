#include <bits/stdc++.h>

using namespace std;

int min_drops(int f, int e){
    vector<vector<int> > dp(f+1,vector<int>(e+1));
    for(int i=0;i<=e;++i){
        for(int j=0;j<=f;++j){
            if(i==0|| j==0){
                dp[j][i]=0;
            }
            else if(j==1){
                dp[j][i]=1; 
            }
            else if(i==1){
                dp[j][i]=j;
            }
            else{
                dp[j][i]=j;
                for(int k=1;k<=j;++k){
                    dp[j][i]= min(dp[j][i], 1+ max(dp[k-1][i-1],dp[j-k][i]));
                }
            }
        }
    }
    return dp[f][e];
}


int main(){
    int f;
    int e;
    cin>>f>>e;
    cout<<min_drops(f,e);
    return 0;
}