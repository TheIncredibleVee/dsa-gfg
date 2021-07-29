#include <bits/stdc++.h>

usind namespace std;

int sq_rt(int n){
    int low = 0;
    int high= n;
    int mid;
    int res=-1;
    while(high>=low){
        mid=(high+low)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            high=mid-1;
        }
        else{
            low=mid+1;
            res=mid;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<sq_rt(n);
}
