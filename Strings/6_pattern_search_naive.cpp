#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> srch_pat(string &s,string &p){
    int n=s.length();
    int m=p.length();
    vector<int> res;
    for(int i=0;i<=n-m;++i){
        bool flag=true;
        for(int j=0;j<m;++j){
            if(s[i+j]!=p[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    string str;
    cin>>str;
    string pat;
    cin>>pat;
    vector<int> res =srch_pat(str,pat);
    if(res.empty()){
        cout<<"-1\n";
    }else{
        print_vector(res);
    }

    return 0;
}