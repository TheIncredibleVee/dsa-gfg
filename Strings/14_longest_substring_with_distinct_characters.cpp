#include<bits/stdc++.h>

using namespace std;

int longest_dist_substr(string &s){
    int res=1;
    int n=s.length();
    int startIdx=0;
    vector<int> prev(256,-1);
    for(int i=0;i<n;++i){
        startIdx=max(startIdx,prev[s[i]]+1);
        res=max(res,i-startIdx+1);
        prev[s[i]]=i;
    }
    return res;
}

int main(){
    string str;
    cin>>str;
    cout<<longest_dist_substr(str);
    return 0;
}