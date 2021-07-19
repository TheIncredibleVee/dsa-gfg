#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long res=0;
    while(n/5>0){
        res+=n/5;
        n/=5;
    }
    cout<<res;
    return 0;
}

