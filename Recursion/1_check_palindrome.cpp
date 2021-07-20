#include <bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool check_palindrome(string &s, int start, int end){
    if(start>=end)
        return true;
    else
        return ((s[start]==s[end])&& check_palindrome(s,start+1,end-1));
}

int main(){
    string s;
    cin>>s;
    print_yes_no(check_palindrome(s,0,s.length()-1));
    return 0;
}

