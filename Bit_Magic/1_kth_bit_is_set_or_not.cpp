#include <bits/stdc++.h>

using namespace std;

bool check_kth_bit(int n, int k){
    int x =1<<(k-1);
    return x&n;
}

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}


int main(){
    int n;
    int k;
    cin>>n>>k;
    print_yes_no(check_kth_bit(n,k));
    return 0;
}

