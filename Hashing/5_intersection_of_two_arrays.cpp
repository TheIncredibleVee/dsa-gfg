#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

vector<int> intersect(vector<int> &a,vector<int> &b){
    vector<int> res;
    unordered_set<int> h(a.begin(),a.end());
    for(auto x:b){
        if(h.find(x)!=h.end()){
            res.push_back(x);
            h.erase(x);
        }
    }
    return res;
}

vector<int> uni(vector<int> &a, vector<int> &b){
    vector<int> res;
    unordered_set<int> h(a.begin(),a.end());
    h.insert(b.begin(),b.end());
    for(auto e: h){
        res.push_back(e);
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
    int m;
    cin>>m;
    vector<int> b(m,0);
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    vector<int> res;
    res= intersect(a,b);
    print_vector(res);
    vector<int> ans;
    ans=uni(a,b);
    print_vector(ans);
    return 0;
}