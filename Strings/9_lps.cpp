#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 int lps_n(string &s, int len){
    for(int res=len-1;res>0;--res){
        bool flag=true;
        for(int i=0;i<res;++i){
            if(s[i]!=s[len-res+i]){
                flag=false;
            }
        }
        if(flag){
            return res;
        }
    }
    return 0;
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


 vector<int> lps_naive(string &s){
    int n=s.length();
    vector<int> res;
    for(int i=0;i<n;++i){
        res.push_back(lps_n(s,i+1));
    }
    return res;
}


int main(){
    string str;
    getline(cin, str);
    //vector<int> ans=lps_naive(str);
    vector<int> ans=lps_kmp(str);
    print_vector(ans);
    return 0;
}