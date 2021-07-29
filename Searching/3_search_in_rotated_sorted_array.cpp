#include <bits/stdc++.h>

using namespace std;

int b_search(vector<int> &a, int low,int high,int key){
    int mid=(high+low)/2;
    if(high<low)
        return -1;
    if(a[mid]==key){
       // cout<<"\t"<<mid;
        return mid;
    }
    else{
        if(a[mid]>a[low]) {
            if (key < a[mid] && key >= a[low]) {
                return b_search(a, low, mid - 1, key);
            } else {
                return b_search(a, mid + 1, high, key);
            }
        }
        else{
            if(key>a[mid]&& key<=a[high]){
                return b_search(a,mid+1,high,key);
            }
            else
                return b_search(a,low,mid-1,key);
        }
    }
}

int main(){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        long long x;
        cin>>x;
        //cout<<x<<endl;
        cout<<b_search(a,0,n-1,x);
        return 0;
}