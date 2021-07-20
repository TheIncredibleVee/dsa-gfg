#include <bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool power_of_two(int n){
    if(n==0)
        return false;
    else if ((n & (n-1))==0)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    print_yes_no(power_of_two(n));
    return 0;
}

