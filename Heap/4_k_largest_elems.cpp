#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> k_elems(vector<int> &a,int k){
    vector<int> res;
    priority_queue<int> pq(a.begin(),a.end());
    while(k--){
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}

vector<int> k_elems_eff(vector<int>&a, int k){
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.begin()+k);
    for(int i=k;i<a.size();++i){
        if(pq.top()<a[i]){
            pq.pop();
            pq.push(a[i]);
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
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
    vector<int> ans= k_elems_eff(a,k);
    print_vector(ans);
    return 0;
}