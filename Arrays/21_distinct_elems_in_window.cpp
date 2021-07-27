#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

 vector<int> dis(vector<int> &a, int k){
    unordered_map<int,int> hm;
    vector<int> res;
    int temp=0;
    for(int i=0;i<k;i++){
        if(hm[a[i]]==0)
            temp++;
        hm[a[i]]++;
    }
    res.push_back(temp);
    for(int i=k;i<a.size();++i){
        if(hm[a[i-k]]==1){
            temp--;
        }
        hm[a[i-k]]--;
        if(hm[a[i]]==0){
            temp++;
        }
        res.push_back(temp);
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
    print_vector(dis(a,k));
    return 0;
}

