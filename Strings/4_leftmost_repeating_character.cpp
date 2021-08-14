#include<bits/stdc++.h>

using namespace std;

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};


int left_rep(string &s){
    unordered_map<char,int> h;
    int i=0;
    int res=INT_MAX;
    for(char x: s){
        auto it=h.find(x);
        if(it!=h.end()){
            res=min(res,min(it->second,i));
        }
        h[x]=i;
        i++;
    }
    if(res==INT_MAX)
        return -1;
    return res;
}

int left_non_rep(string &s){
    unordered_map<char,int> h;
    int i=0;
    int res=INT_MAX;
    for(char x: s){
        auto it =h.find(x);
        if(it!=h.end()){
            h[x]=-1;
        }
        else{
            h[x]=i;
        }
        i++;
    }
    for(auto e:h){
        if(e.second!=-1){
            res=min(e.second,res);
        }
    }
    if(res==INT_MAX)
        return -1;
    return res;
}

int main(){
    string str;
    cin>>str;
    cout<<left_rep(str)<<"\n"<<left_non_rep(str);
    return 0;
}