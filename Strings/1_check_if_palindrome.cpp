#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(string &s){
    int i=0;
    int n=s.length()-1;
    while(i<n){
        if(s[i++]!=s[n--]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cin>>str;
    if(check_palindrome(str)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}