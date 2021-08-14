#include<bits/stdc++.h>

using namespace std;

string rev_words(string &s){
    string temp;
    vector<string> vec;
    int i=0;
    int start =0;
    while(s[i]!='\0'){
        while(s[i]!=' ' && s[i]!= '.' && s[i]!='!' && s[i]!='\0'){
            i++;
        }
        if(start<i) {
            string temp = s.substr(start, i-start );
            //cout<<i<<"\t "<<start<<endl;
            vec.push_back(temp);
            start=++i;
        }else {
            i++;
        }
    }
    reverse(vec.begin(),vec.end());
    string res;
    for(const string& x:vec){
        res.append(x);
        res.append(" ");
    }
    return res;
}

void rev_eff(string &s){
    int i=0;
    int start=0;
    for(;i<s.length();++i){
        if(s[i]==' '){
            reverse(s.begin()+start, s.begin()+i);
            start=i+1;
        }
    }
    reverse(s.begin()+start, s.end());
    reverse(s.begin(),s.end());
}
int main(){
    string str;
    getline(cin,str);
    rev_eff(str);
    cout<<str;
    return 0;
}