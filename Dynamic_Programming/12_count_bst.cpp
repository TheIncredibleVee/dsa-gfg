#include<bits/stdc++.h>

using namespace std;

int count_bst(int n){
    vector<int> dp(n+1,0);
    for(int i=0;i<=n;++i){
        if(i==0 || i==1){
            dp[i]=1;
        }else{
            for(int j=0;j<i;++j){
                dp[i]+=dp[j]*dp[i-1-j];
            }
        }
    }
    return dp[n];
}


int main(){
    int namespace std;
    cin>>n;
    cout<<count_bst(n);
    return 0; 
}