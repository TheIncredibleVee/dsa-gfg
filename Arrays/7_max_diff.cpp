#include <bits/stdc++.h>

using namespace std;

int max_diff(vector<int> &a){
    int res=a[1]-a[0];
    int mini=a[0];
    for (int i = 0; i < a.size(); ++i) {
        res=max(res,a[i]-mini);
        mini=min(mini,a[i]);
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
    cout<<max_diff(a);
    return 0;
}
