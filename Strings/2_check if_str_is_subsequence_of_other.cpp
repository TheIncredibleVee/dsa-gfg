#include<bits/stdc++.h>

using namespace std;

bool check_subseq(string &s1, string &s2){
    int i=0;
    int j=0;
    int n=s1.length();
    int m=s2.length();
    if(n<m){
        return false;
    }
    while(i<n && j<m ){
        if(s1[i]==s1[j]){
            i++,j++;
        }
        else{
            i++;
        }
    }
    if(j==m){
        return true;
    }
    else{
        return false;
    }
}

bool check_sub(string &s1, string &s2,int n, int m){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(s1[n-1]==s2[m-1]){
        check_sub(s1,s2,n-1,m-1);
    }
    else{
        check_sub(s1,s2,n-1,m);
    }
}

int main(){
    string str,str2;
    cin>>str;
    cin>>str2;
    if(check_subseq(str,str2)){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    return 0;
}