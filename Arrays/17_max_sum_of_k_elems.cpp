#include <bits/stdc++.h>

using namespace std;

int max_k_sum(vector<int> &a, int k){
    int res=0;
    for(int i=0;i<k;++i){
        res+=a[i];
    }
    int temp=res;
    for(int i=k;i<a.size();++i){
        temp+=a[i];
        temp-=a[i-k];
        res=max(res,temp);
    }
    return res; 
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<max_k_sum(a,k);
    return 0;
}
