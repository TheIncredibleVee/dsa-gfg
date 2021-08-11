#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
    }
    cout<<endl;
}
vector<int> sub_sum(vector<int> &a,int sum){
    vector<int> res;
    vector<int> presum(a.size());
    presum[0]=a[0];
    int len=0;
    int high,low;
    for (int i = 1; i < a.size(); ++i) {
        if(presum[i-1]==sum){
            len=i+1;
            high=i;
            low=0;
        }
        presum[i]=presum[i-1]+a[i];
    }
    unordered_map<int,int> h;
    for (int i = 0; i < a.size(); ++i) {
        auto it=h.find(presum[i]-sum);
        if(it!=h.end() && len<i-it->second){
            if(i>it->second){
                high = i;
                low = it->second;
                len=i-it->second;
            }
            else{
                high=it->second;
                low=i;
                len=it->second-i;
            }

        }
        h[presum[i]]=i;
    }
    for(int j=low+1;j<=high;++j){
        res.push_back(a[j]);
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


