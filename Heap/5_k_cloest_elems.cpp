#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> k_close(vector<int> &a, int k, int num){
    vector<int> res;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<k;++i){
        pq.push({abs(num-a[i]),i});
    }
    for(int i=k;i<a.size();++i){
        if(pq.top().first>abs(num-a[i])){
            pq.pop();
            pq.push({abs(num-a[i]),i});
        }
    }
    while(!pq.empty()){
        res.push_back(a[pq.top().second]);
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
    int k,x;
    cin>>x>>k;
    vector<int> ans=k_close(a,k,x);
    print_vector(ans);
    return 0;
}