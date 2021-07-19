#include <bits/stdc++.h>

using namespace std;

long long fact_rec(long long n){
    if(n==1 || n==0)
        return 1;
    else
        return (n*fact_rec(n-1));
}

long long fact_iter(int n){
    long long out=1;
    for(int i=2;i<=n;++i)
        out*=i;
    return out;
}

int main(){
    int n;
    cin>>n;
    cout<<fact_rec(n)<<endl;
    cout<<fact_iter((long long)n)<<endl;
    return 0;
}
