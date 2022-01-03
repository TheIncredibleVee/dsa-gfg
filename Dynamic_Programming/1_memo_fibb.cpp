#include <bits/stdc++.h>

using namespace std;

int fibb(int n, vector<int> &memo){
    if(memo[n]==-1){
        if(n==0 || n==1){
            memo[n]=1;
        }else{
            memo[n]=fibb(n-1)+fibb(n-2);
        }
    }
    return memo[n];
}


int main(){
    int n;
    cin >> n;
    vector<int> memo(n+1,-1);
    cout << fibb(n,memo) << endl;
    return 0; 
}