#include<bits/stdc++.h>

using namespace std;
void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

pair<int,int> sub_sum(vector<int> &a,int sum){
     vector<int> presum(a.size());
     presum[0]=a[0];
     int len=0;
     int high,low;
     unordered_map<int,int> h;
     h[presum[0]]=0;
     for (int i = 1; i < a.size(); ++i) {
         if(presum[i-1]==sum){
             len=i;
             high=i-1;
             low=0;
         }
         presum[i]=presum[i-1]+a[i];
         auto it=h.find(presum[i]-sum);
         if(it!=h.end() && len<i-it->second){
             high = i;
             low = it->second+1;
             len=i-it->second;
         }
         auto e=h.find(presum[i]);
         if(e==h.end())
             h[presum[i]]=i;
     }
     pair<int,int> res={low,high};
     return res;
 }

pair<int,int> long_common_span(vector<int> &a,vector<int> &b){
    int n=min(a.size(),b.size());
    vector<int> temp(n);
    for(int i=0;i<n;++i){
        temp[i]=a[i]-b[i];
    }
    return sub_sum(temp,0);
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
    vector<int> b(n,0);
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    pair<int,int> ans= long_common_span(a,b);
    if(ans.first==-1){
        cout<<"NO common span"<<endl;
    }
    else
        cout<<"Common span from "<<ans.first<<"th index to "<<ans.second<<" index"<<endl;
    return 0;
}

