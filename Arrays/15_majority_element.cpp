#include <bits/stdc++.h>

using namespace std;

int majority_elem(vector<int> &a){
    int res=-1;
    int ctr=1;
    int elem=a[0];
    for(int i=1;i<a.size();++i){
        if(a[i]==elem){
            ctr++;
        }
        else{
            ctr--;
        }
        if(ctr==0){
            elem=a[i];
            ctr=1;
        }
    }
    int freq=1;
    for (int i = 1; i < a.size(); ++i) {
        if(elem==a[i])
            freq++;
    }
    if(freq>=a.size()/2)
        return elem;
    else
        return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<majority_elem(a);
    return 0;
}