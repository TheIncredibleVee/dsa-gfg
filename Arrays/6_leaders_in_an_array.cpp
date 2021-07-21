#include <bits/stdc++.h>

using namespace std;

vector<int> leaders(vector<int> &a){
    vector<int> res;
    int n=a.size();
    res.push_back(a[n-1]);
    for (int i = n-2; i >=0; --i) {
        if(res[res.size()-1]<a[i]){
            res.push_back(a[i]);
        }
    }
    return res;
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
    vector<int> res;
    res=leaders(a);
    print_vector(res);
    return 0;
}