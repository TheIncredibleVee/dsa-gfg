#include <bits/stdc++.h>

using namespace std;

int josephous(int n,int k){
    if(n==1)
        return 0;
    else
        return ((josephous(n-1,k))+k)%n;
}

int main(){
    int n;
    int k;
    int starting_pos=0;
    cin>>n>>k;
    cin>>starting_pos;                                         //optional code in case the starting is not from 0
    cout<<josephous(n,k)+starting_pos;
    return 0;
}

