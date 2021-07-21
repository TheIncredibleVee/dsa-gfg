#include <bits/stdc++.h>

using namespace std;

vector<string> sub;

void subsets(string &s, string curr,int index){
    if(index==s.length()) {
        sub.push_back(curr);
        return;
    }
    subsets(s,curr+s[index],index+1);
    subsets(s,curr,index+1);
    return;
}

void print_vector(const vector<string> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

int main(){
    string s;
    cin>>s;
    subsets(s,"",0);
    print_vector(sub);
    return 0;
}

