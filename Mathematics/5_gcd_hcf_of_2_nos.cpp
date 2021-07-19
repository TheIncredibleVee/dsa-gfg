#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

long long hcf(int a,int b){
    long long hcf= a*b/(long long)gcd(a,b);
    return hcf;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a,b)<<"\nHCF: "<<hcf(a,b);
    return 0;
}