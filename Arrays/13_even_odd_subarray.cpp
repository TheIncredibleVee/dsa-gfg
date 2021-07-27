#include <bits/stdc++.h>

using namespace std;

int max_odd_even_subarray(vector<int> &a){
    int res=1;
    int prev=a[0];
    int curr=1;
    for(int i=1;i<a.size();++i){
        if((prev%2==0 && a[i]%2==1)||(prev%2==1&&a[i]%2==0)){
            curr++;
            res=max(res,curr);
        } else{
            curr=1;
        }
        prev=a[i];
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
    cout<<max_odd_even_subarray(a);
    return 0;
}

