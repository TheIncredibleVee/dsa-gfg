#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> sort_k_sorted(vector<int> &a, int k){
    vector<int> res;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<=k;++i){
        pq.push(a[i]);
    }

    for(int i=k+1;i<a.size();++i){
        res.push_back(pq.top());
        pq.pop();
        pq.push(a[i]);
    }
    while(!pq.empty()){
        res.push_back(pq.top());
        pq.pop();
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
    vector<int> ans= sort_k_sorted(a,k);
    print_vector(ans);
    return 0;
}