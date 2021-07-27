#include <bits/stdc++.h>

using namespace std;

int eq_pt(vector<int>&a){
    int sum=0;
    for(int i=0;i<a.size();++i){
        sum+=a[i];
    }
    int lsum=0;
    for(int i=0;i<a.size();++i){
        if(lsum==(sum-a[i])){
            return i;
        }
        lsum+=a[i];
        sum-=a[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<eq_pt(a);
    return 0;
}
