#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> search_dis_pat(string &s, string &p){
    vector<int> res;
    int n=s.length();
    int m=p.length();
    for(int i=0;i<=n-m;){
        bool flag=true;
        int j=0;
        for(;j<m;++j){
            if(s[i+j]!=p[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            res.push_back(i);
        }
        if(j==0) {
            i++;
        }
        else{
            i+=j;
        }
    }
    return res;
}

int main(){
    string txt, pat;
    cin>>txt;
    cin>>pat;
    vector<int> res= search_dis_pat(txt,pat);
    if(res.empty()){
        cout<<"-1\n";
    }else{
        print_vector(res);
    }
    return 0;
}