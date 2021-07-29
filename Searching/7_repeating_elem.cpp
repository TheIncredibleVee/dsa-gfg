#include <bits/stdc++.h>

using namespace std;

//This code is considering the elem start from 1 to n-1 in case of starting from 0 just add 1 everywhere slow and fast and return slow-1
int rep(vector<int> &a){
    int slow=a[0];
    int fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    slow=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return s[slow];
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    rep(a);
    return 0;
}
