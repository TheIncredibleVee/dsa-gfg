#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s, int i ,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int palindromePartioning(string s){
    vector<vector<int> > dp(str.length()+1,vector<int>(0));
    
    for(int i=1;i<str.length();i++){
        for(int j=0;j+i<str.length();j++){
            if(isPalindrome(str, j , i+j)){
                dp[j][j+i]=0;
            }else{
                dp[j][i+j]= INT_MAX;
                for(int k=j;k<j+i;++k){
                    dp[j][i+j]= min(dp[j][i+j], 1+dp[j][k]+dp[k+1][i+j]);
                }
            }
        }
    }
    return dp[0][str.length()-1];
}


int main(){
    string str;
    cin>>str;
    cout<<palindromePartioning(str);
    return 0;
}