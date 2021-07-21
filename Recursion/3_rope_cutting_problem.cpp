#include <bits/stdc++.h>

using namespace std;

int maxi(int a, int b, int c){
    return max(max(a,b),c);
}

int cut_ropes(int n, int a, int b, int c){
    if(n==0)
        return 0;
    if (n<0)
        return -1;
    int res=maxi( cut_ropes(n-a,a,b,c), cut_ropes(n-b,a,b,c), cut_ropes(n-c,a,b,c));
    if (res==-1)
        return -1;`
    else
        return 1+res;
}

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<cut_ropes(n,a,b,c);
    return 0;
}
