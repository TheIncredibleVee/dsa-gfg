#include <bits/stdc++.h>

using namespace std;

int max_ones(vector<int> &a){
    int res=0;
    int curr=0;
    for(int i : a){
        if(i==1){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=0;
        }
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
    cout<<max_ones(a);
    return 0;
}
