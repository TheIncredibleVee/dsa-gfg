#include <bits/stdc++.h>

using namespace std;

int prefix_sum(vector<int> &a,int l, int r){
    if(l==0)
        return a[r];
    else
        return a[r]-a[l-1];
}

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    vector<int> prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;++i){
        prefix[i]=prefix[i-1]+a[i];
    }
    print_vector(prefix);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix_sum(prefix,l,r);
    }

}
