#include <bits/stdc++.h>

using namespace std;

long long power_rec(long long n,long long x){
    if(x==1)
        return n;
    if(x%2==0){
        return power_rec(n,x/2)* power_rec(n,x/2);
    }
    else
        return power_rec(n,x-1)*n;
}

long long power_iter(long long n, long long x){
    long long res=1;
    while(x>0){
        if(x&1)
            res=res*n;
        n*=n;
        x/=2;
    }
    return res;
}

int main(){
    long long n,x;
    cin>>n>>x;
    cout<<power_rec(n,x)<<endl<<power_iter(n,x);
    return 0;
}

