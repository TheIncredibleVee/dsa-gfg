#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

vector<int> sub_sum_zero(vector<int> &a){
    vector<int> res;
    vector<int> presum(a.size());
    presum[0]=a[0];
    for (int i = 1; i < a.size(); ++i) {
        if(presum[i-1]==0){
            for(int j=0;j<=i-1;++j){
                res.push_back(a[j]);
            }
            return res;
        }
        presum[i]=presum[i-1]+a[i];

    }
    unordered_map<int,int> h;
    int high,low;
    for (int i = 0; i < a.size(); ++i) {
        auto it=h.find(presum[i]);
        if(it!=h.end()){
            if(i>it->second){
                high=i;
                low=it->second;
            }
            else{
                high=it->second;
                low=i;
            }
            //cout<<i<<"\t"<<it->first<<"\t"<<it->second<<endl;
            for(int j=low+1;j<=high;++j){
                res.push_back(a[j]);
            }
            return res;
        }

        h[presum[i]]=i;
    }
    return res;
}
vector<int> sub_sum(vector<int> &a,int sum){
    vector<int> res;
    vector<int> presum(a.size());
    presum[0]=a[0];
    for (int i = 1; i < a.size(); ++i) {
        if(presum[i-1]==sum){
            for(int j=0;j<=i-1;++j){
                res.push_back(a[j]);
            }
            return res;
        }
        presum[i]=presum[i-1]+a[i];
    }
    unordered_map<int,int> h;
    int high,low;
    for (int i = 0; i < a.size(); ++i) {
        auto it=h.find(presum[i]-sum);
        if(it!=h.end()){
            if(i>it->second){
                high=i;
                low=it->second;
            }
            else{
                high=it->second;
                low=i;
            }
            //cout<<i<<"\t"<<it->first<<"\t"<<it->second<<endl;
            for(int j=low+1;j<=high;++j){
                res.push_back(a[j]);
            }
            return res;
        }
        h[presum[i]]=i;
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
    vector<int> res=sub_sum(a,sum);
    print_vector(res);
    return 0;
}

