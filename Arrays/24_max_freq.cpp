#include <bits/stdc++.h>
#define CONST 1000

using namespace std;

int max_freq(vector<int> &l, vector<int>&r){
    vector<int> a(CONST,0);

    for(int i=0;i<l.size();++i){
        a[l[i]]++;
        a[r[i]+1]--;
    }
    int freq=a[0];
    int res=0;
    for(int i=1;i<CONST;++i){
        a[i]+=a[i-1];
        if(freq<a[i]){
            freq=a[i];
            res=i;
        }
    }
    return res;

}

int main(){
    int n;
    cin>>n;
    vector<int> l(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>l[i];
    }
    vector<int> r(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>r[i];
    }
    cout<<max_freq(l,r);
    return 0;
}

