#include<bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool check_rot(string &a, string &b){
    if(a.length()!=b.length())
        return false;
    return (a+a).find(b)!=string::npos;
}


int main(){
    string a,b;
    getline(cin,a);
    cin>>b;
    print_yes_no(check_rot(a,b));
    return 0;
}