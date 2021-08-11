#include<bits/stdc++.h>

using namespace std;

pair<int, int> pair_sum(vector<int> &a,int sum){
    pair<int, int> ans;
    ans.first=-1;
    ans.second=-1;
    unordered_set<int> h(a.begin(),a.end());
    for(int i=0;i<a.size();++i){
        if(h.count(sum-a[i])){
            ans.first= sum-a[i];
            ans.second=a[i];
            return ans;
        }
    }
    return ans;
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
    pair<int, int> res= pair_sum(a,sum);
    if(res.first==-1){
        cout<<"No pair";
    }
    else{
        cout<<res.first<<"\t"<<res.second;
    }
    return 0;
}