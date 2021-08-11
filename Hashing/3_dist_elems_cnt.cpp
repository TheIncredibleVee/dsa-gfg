#include<bits/stdc++.h>

using namespace std;

int count_dis(vector<int> arr){
    unordered_set<int> h(arr.begin(),arr.end());
    return h.size();
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<count_dis(a)<<endl;
    return 0;
}

