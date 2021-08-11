

#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        if(i==-1)
            cout<<"0\t";
        else
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
    unordered_map<int,int> h;
    for (int i = 1; i < a.size(); ++i) {
        if(presum[i-1]==sum){
            len=i;
            high=i-1;
            low=0;
        }
        auto it=h.find(presum[i]-sum);
        if(it!=h.end() && len<i-it->second){
            if(i>it->second){
                high = i;
                low = it->second+1;
                len=i-it->second;
            }
            else{
                high=it->second;
                low=i+1;
                len=it->second-i;
            }

        }
        else
            h[presum[i]]=i;
        presum[i]=presum[i-1]+a[i];
    }
    for(int j=low;j<=high;++j){
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
        if(a[i]==0){
            a[i]=-1;
        }
    }
    vector<int> res=sub_sum(a,0);
    print_vector(res);
    return 0;
}


