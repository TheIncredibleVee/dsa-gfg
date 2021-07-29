#include <bits/stdc++.h>

using namespace std;

int peak(vector<int> &a, int low,int high){
    if(high<low)
        return -1;
    int mid=(high+low)/2;
    if((mid==0||a[mid]>=a[mid-1])&&(mid==a.size()-1||a[mid]>a[mid+1]))
        return mid;
    else if(a[mid]<a[mid-1] && mid>0){
        return peak(a,low,mid-1);
    }
    else
        return peak(a,mid+1,high);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<peak(a,0,a.size()-1);
    return 0;
}