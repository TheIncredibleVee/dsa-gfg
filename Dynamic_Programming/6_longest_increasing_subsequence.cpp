#include<bits/stdc++.h>

using namespace std;

int lis(vector<int> &arr, int n){
    int res=0;
    vector<int> dp(n,0);
    for(int i=0;i<n;++){
        dp[i]=1;
        for(int j=0;j<i;++j){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }

    for(auto x:dp){
        res=max(res,x);
    }
    return res;

}


int lis_eff(vector<int> &arr, int n){
    vector<int> tail;
    tail[0]=arr[0];
    for(int i=1;i<n;++i){
        if(tail[tail.length()-1]<arr[i]){
            tail.push_back(arr[i]);
        }else{
            int l=0;
            int r=tail.length();
            while(r>l){
                int mid =(l+r)/2;
                if(arr[i]<=tail[mid]){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }
            tail[r]= arr[i];
        }
    }
    return tail.length();
}

int main(){
    int n;
    vector<int> arr(n,0);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<lis(arr,n);
    return 0; 
}