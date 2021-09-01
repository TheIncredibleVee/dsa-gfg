#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> maxi_items(vector<int> &a, int sum){
    vector<int> res;
    priority_queue<int, vector<int>,greater<int>> pq(a.begin(),a.end());
    while(!pq.empty() && sum>=0){
        if(pq.top()<sum){
            res.push_back(pq.top());
            sum-=pq.top();
            pq.pop();
        }
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
    int sum;
    cin>>sum;
    vector<int> ans=maxi_items(a,sum);
    print_vector(ans);
    return 0;
}