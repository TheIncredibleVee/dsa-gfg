#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }


vector<int> lps_kmp(string &s){
    int n=s.length();
    vector<int> res;
    res.push_back(0);
    for(int i=1;i<n;++i){
        int len= res[i-1];
        if(s[len]==s[i]){
            res.push_back(len+1);
        }
        else{
            int flag= true;
            while(len>1){
                len=res[len-1];
                if(len<1)
                    break;
                if(s[len]==s[i]){
                    res.push_back(len+1);
                    flag=false;
                    break;
                }
            }
            if(flag){
                res.push_back(0);
            }
        }
    }
    return res;
}

vector<int> search_pat_kmp(string &s, string &p) {
    vector<int > res;
    vector<int> lps= lps_kmp(p);
    int i=0,j=0;
    int n=s.length();
    int m=p.length();
    while(i<=n){
        if(s[i]==p[j]){
            i++;
            j++;
        }
        if(j==m){
            res.push_back(i-m);
            j=lps[m-1];
            i++;
        }
        else if (i<n && s[i]!=p[j]){
            if(j==0)
                i++;
            else
                j=lps[j-1];
        }
    }
    return res;
}

int main(){
    string txt, pat;
    getline(cin, txt);
    cin>>pat;
    vector<int> ans=search_pat_kmp(txt,pat);
    print_vector(ans);
    return 0;
}


