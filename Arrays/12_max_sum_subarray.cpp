#include <bits/stdc++.h>

using namespace std;

int max_sum_subarray(vector<int> &a){
    int res=0;
    int n=a.size();
    vector<int> maxend(n);
    maxend[0]=a[0];
    res=a[0];
    for(int i=1;i<n;++i){
        maxend[i]=max(maxend[i-1]+a[i],a[i]);
        res=max(maxend[i],res);
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
    cout<<max_sum_subarray(a);
    return 0;
}

