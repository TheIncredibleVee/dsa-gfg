#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }
 vector<int> dist(vector<int> &a, int k){
    vector<int> res;
    unordered_map<int,int> h;
     for (int i = 0; i < k; ++i) {
         h[a[i]]++;
     }
    res.push_back(h.size());
    for(int i=k;i<a.size();++i){
        if(h[a[i-k]]==1){
            h.erase(a[i-k]);
        }
        else{
            h[a[i-k]]--;
        }
        h[a[i]]++;
        res.push_back(h.size());
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
    vector<int> ans= dist(a,k);
    print_vector(ans);
    return 0;
}

