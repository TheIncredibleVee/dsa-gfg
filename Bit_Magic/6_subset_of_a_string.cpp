#include <bits/stdc++.h>

using namespace std;

vector<string> subset(string str){
    int n=str.length();
    vector<string> res;
    int pow_size=pow(2,n);
    for (int i = 0; i < pow_size; ++i) {
       string temp="";
        for (int j = 0; j < n; ++j) {
            if ((i & (1 << j)) != 0) {
                temp+=str[j];
            }
        }
        res.push_back(temp);
    }
    return res;
}
void print_vector(const vector<string> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }


int main(){
    string s;
    cin>>s;
    print_vector(subset(s));
    return 0;
}

