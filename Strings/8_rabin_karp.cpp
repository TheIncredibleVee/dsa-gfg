#include<bits/stdc++.h>
#define d 256
#define q 101
using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

vector<int> rabin_karp(string &s, string &p){
    vector<int> res;
    int n=s.length();
    int m=p.length();
    int temp;
    temp = ((int)pow(d, m - 1)) % q;
    int hp=0;
    int ht=0;
    for(int i=0;i<m;++i){
        hp=(hp*d+p[i])%q;
        ht=(ht*d+s[i])%q;
    }
    for(int i=0;i<=n-m;++i){

        if(hp==ht){
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

        if(i<n-m)
            ht= (d*(ht-s[i]*temp)+s[i+m])%q;
        if(ht<0){
            ht=ht+q;
        }
    }
    return res;
}

int main(){
    string txt,pat;
    getline(cin,txt);
    cin>>pat;
    vector<int> ans= rabin_karp(txt, pat);
    if(!ans.empty())
        print_vector(ans);
    else
        cout<<"-1\n";
    return 0;
}

