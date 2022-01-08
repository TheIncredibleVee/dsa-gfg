#include <bits/stdc++.h>

using namespace std;

int customSum(vector<int> &arr, int b, int e){
    int sum=0;
    for(int i=b;i<=e;i++)
        sum+=arr[i];
    return sum;
}


int miniMaxPages(vector<int> & arr, int n, int k){
    vector<vector<int> > dp(k+1, vector<int>(n+1,0));
    for(int i=1;i<=k;++i){
        for(int j=1;j<=n;++j){
            if(i==1){
                dp[i][j]= customSum(arr, 0,j-1);
            }else{
                if(j==1){
                    dp[i][j]=arr[0];
                }else{
                    dp[i][j]=INT_MAX;
                    for(int l=1;l<j;++l){
                        dp[i][j]= min(dp[i][j],max(dp[i-1][l],customSum(arr,l,j -1)));
                    }
                }
            }
        }
    }
    cout<<"ans "<<dp[k][n]<<endl;
    return dp[k][n];
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<miniMaxPages(arr, n, k);
    return 0;
}