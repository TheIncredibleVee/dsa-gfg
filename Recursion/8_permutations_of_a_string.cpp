#include <bits/stdc++.h>

using namespace std;

vector<string> per;

void permutation(string &s,int i=0){
    if(i==(s.length()-1))
        per.push_back(s);
    for(int j=i;j<s.length();++j){
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);
    }
}

void print_vector(const vector<string> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }
int main(){
    string s;
    cin>>s;
    permutation(s);
    print_vector(per);
    return 0;
}

