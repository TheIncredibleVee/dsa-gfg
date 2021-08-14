#include<bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}


bool check(unordered_map<char,int> &hm){
    for(auto x: hm){
        if(x.second!=0)
            return false;
    }
    return true;
}

bool anagram_search(string &s, string &p){
    unordered_map<char, int> hm;
    int n=s.length();
    int m=p.length();
    for(int i=0;i<m;++i){
        hm[s[i]]++;
        hm[p[i]]--;
    }
    if(check(hm)){
        return true;
    }
    for(int i=m;i<n;++i){
        hm[s[i]]++;
        hm[s[i-m]]--;
        if(check(hm)){
            return true;
        }
    }
    return false;
}


int main(){
    string str, pat;
    getline(cin, str);
    cin>>pat;
    print_yes_no(anagram_search(str,pat));
    return 0;
}