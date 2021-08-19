#include<bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool isBalanced(string &s){
    stack<char> st;
    for(int i=0;i<s.length();++i){
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            st.push(s[i]);
        else{
            if(st.empty()){
                return false;
            }
            char temp = st.top();
            if(temp=='{' && s[i]!='}')
                return false;

            if(temp=='[' && s[i]!=']')
                return false;

            if(temp=='(' && s[i]!=')')
                return false;
            st.pop();
        }
    }
    if(st.empty())
        return true;
    else
        return false;
}

int main(){
    string str;
    cin>>str;
    print_yes_no(isBalanced(str));
    return 0;
}