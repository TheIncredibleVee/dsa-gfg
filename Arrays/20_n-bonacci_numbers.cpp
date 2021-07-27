
#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

 vector<int> n_bonacci(int n,int m){
    vector<int> res;
    for(int i=0;i<n-1;++i){
        res.push_back(0);
    }
    res.push_back(1);
     res.push_back(1);
    int temp=2;
    for(int i=n+1;i<m;++i){
        temp=temp-res[i-n-1];
        res.push_back(temp);
        temp+=res[i];
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    print_vector(n_bonacci(n,m));
    return 0;
}

