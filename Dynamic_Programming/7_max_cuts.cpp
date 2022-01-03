#include <bits/stdc++.h>


using namespace std;
int max_cuts(int n, int a, int b, int c){

    vector<int> dp(n+1,0);
    for(int i=0;i<=n;++i){
        dp[i]=-1;
        if(i-a>=0){
            dp[i]=max(dp[i], dp[i-a]);
        }
        if(i-b>=0){
            dp[i]=max(dp[i], dp[i-b]);
        }
        if(i-c>=0){
            dp[i]=max(dp[i], dp[i-b]);
        }
        if(dp[i]!=0){
            dp[i]++;
        }

    }
    return dp[n];


}


int main(){
    int n;
    int a;
    int b;
    int c;
    cin>>n>>a>>b>>c;
    cout<<max_cuts(n,a,b,c)<<endl;
    return 0;
}