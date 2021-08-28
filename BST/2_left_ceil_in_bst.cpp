#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> ceil_left(vector<int> &a){
    vector<int> res;
    res.push_back(-1);
    set<int> s;
    s.insert(a[0]);
    for(int i=1;i<a.size();++i){
        auto it=s.lower_bound(a[i]);
        if(it!=s.end()){
            res.push_back(*it);
        }
        else{
            res.push_back(-1);
        }
        s.insert(a[i]);
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
    vector<int> ans=ceil_left(a);
    print_vector(ans);
    return 0;
}