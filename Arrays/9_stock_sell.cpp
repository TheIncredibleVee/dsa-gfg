#include <bits/stdc++.h>

using namespace std;

int max_profit(vector<int> &a){
    int res=0;
    for(int i=0;i<a.size();++i){
        if(a[i]>a[i-1])
            res+=a[i]-a[i-1];
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
        cout<<max_profit(a);
}