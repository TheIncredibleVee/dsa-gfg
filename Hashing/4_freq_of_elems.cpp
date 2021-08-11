#include<bits/stdc++.h>

using namespace std;

void freq_elem(vector<int> &arr){
    unordered_map<int,int> hm;
    for(auto x:arr){
        hm[x]++;
    }
    for(auto elem:hm){
        cout<<elem.first<<" "<<elem.second<<endl;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    freq_elem(a);
    return 0;
}