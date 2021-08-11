#include<bits/stdc++.h>

using namespace std;

pair<int,int> long_sub_seq(vector<int> &a){
    pair<int,int> res;
    int len=1;
    unordered_set<int> h(a.begin(),a.end());
    for(auto e:h){
        if(h.find(e-1)==h.end()){
            int end=e+1;
            int start=e;
            while(h.find(end)!=h.end()){
                end++;
            }
            if(end-start>len){
                len=end-start;
                res.first=start;
                res.second=end-1;
            }
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
    pair<int,int> res;
    res=long_sub_seq(a);
    cout<<"Longest subsequence is starting from "<<res.first<<" and ending at "<<res.second<<endl;
    return 0;
}
