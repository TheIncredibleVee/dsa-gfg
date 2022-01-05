#include <bits/stdc++.h>

using namespace std;

int subsetSum(vector<int> &arr ,int n, int sum){
    vector<vector<int> > dp(sum+1, vector<int>(n+1,0));
    
    for(int i=0;i<=sum;++i){
        for(int j=0;j<=n;j++){
            if(j==0 && i!=0){
                dp[i][j]=0; 
            }
            eles if(i==0){
                dp[i][j]=1;
            }else{
                dp[i][j]=d[i][j-1];
                if(arr[i-1]<=i)
                    dp[i][j]+=d[i-arr[i-1]][j-1]);
            }
        }
    }

}


int main(){
    int n;
    cin>>n;
    int sum;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cin>>sum;
    cout<<subseSum(arr,n,sum);
    return 0;
}