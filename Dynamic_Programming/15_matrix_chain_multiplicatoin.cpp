#include <bits/stdc++.h>

using namespace std;

int matrix_chin_multi(vector<int> &arr, int n){
    vector<vector<int> > dp(n, vector<int>(n,0));
    for(int i=1; i<n; i++){
        for(int j=0;j+i<n-i;++j){
            if(j==1){
                dp[j][i+j]=0;
            }else{
                dp[j][j+i]=INT_MAX;
                for(int k=j+1;k<j+i;++k){
                    dp[j][j+i]= min(dp[j][j+i], dp[i+j][k]+dp[j][k]+arr[i]*arr[i+j]*arr[k]); 
                }
            }
        }
    }
    return d[0][n-1];
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<matrix_chain_multi(arr ,n);
    return 0;
}