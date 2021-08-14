#include<bits/stdc++.h>

using namespace std;

long long int fact(int n){
    long long int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

long long int ranks(string &s){
    long long int ans=1;
    int n=s.length();
    long long multplier=fact(n);
    vector<int> count(256,0);
    for(int i=0;i<n;++i){
        count[s[i]]++;
    }
    for(int i=1;i<256;++i){
        count[i]+=count[i-1];
    }
    for(int i=0;i<n-1;++i){
        multplier=multplier/(n-i);
        ans+=count[s[i]-1]*multplier;
        for(int j=s[i];j<256;++j){
            count[j]--;
        }
    }
    return ans;
}

int main(){
    string str;
    getline(cin,str);
    long long int res;
    res = ranks(str);
    cout<<res;
    return 0;
}