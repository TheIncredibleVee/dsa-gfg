#include <bits/stdc++.h>

using namespace std;

int count_set_bits(int n){
    int res=0;
    while(n>0){
        n= (n & (n-1));
        res++;
    }
    return res;
}


int lookup[256];

void init(){
    lookup[0]=0;
    for (int i = 1; i < 256; ++i) {
        lookup[i]= (i & 1) + lookup[i/2];
    }
}

int count(int n){
    init();
    int res=lookup[n & 0xff];
    n=n>>8;
    res+= lookup[n & 0xff];
    n=n>>8;
    res+= lookup[n & 0xff];
    n=n>>8;
    res+= lookup[n & 0xff];
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<count_set_bits(n)<<endl<<count(n)<<endl;
    return 0;
}