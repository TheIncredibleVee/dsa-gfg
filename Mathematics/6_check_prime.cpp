#include <bits/stdc++.h>

using namespace std;

bool check_prime(int n){
    if(n==1)
        return false;
    if(n==2||n==3)
        return true;
    for(int i=5;i<=sqrt(n);i=+6){
        if(n%i==0||n%(i+2)==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(check_prime(n))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}