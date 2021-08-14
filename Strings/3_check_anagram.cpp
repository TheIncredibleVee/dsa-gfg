#include<bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool check_anagram(string &s1, string &s2){
    if(s1.length()!=s2.length())
        return false;
    unordered_map<char, int> h;
    for(int i=0;i<s1.length();++i){
        h[s1[i]]++;
        h[s2[i]]--;
    }
    for(auto e:h){
        if(e.second!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    print_yes_no(check_anagram(s1,s2));
    return 0;
}