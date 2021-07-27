#include <bits/stdc++.h>

using namespace std;

int max_sum_cir_arr(vector<int> &a){
    int res=0;
    int n=a.size();
    vector<int> maxend(n);
    maxend[0]=a[0];
    res=a[0];
    int sum=a[0];
    vector<int> maxend2(n);
    maxend2[0]=-a[0];
    int temp=-a[0];
    for(int i=1;i<n;++i){
        maxend[i]=max(maxend[i-1]+a[i],a[i]);
        res=max(res,maxend[i]);
        sum+=a[i];
        a[i]=-a[i];
        maxend2[i]=max(maxend2[i-1]+a[i],a[i]);
        temp= max(temp, maxend2[i]);
    }
    //cout<<sum<<"\t"<<temp<<"\t"<<res<<endl;
    res=max(res,sum+temp);
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<max_sum_cir_arr(a);
    return 0;
}
