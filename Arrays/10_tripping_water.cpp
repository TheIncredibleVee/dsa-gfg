#include <bits/stdc++.h>

using namespace std;

int trip_water(vector<int> &a){
    int res=0;
    int n=a.size();
    //pre-compute lmax and rmax arrays
    vector<int> lmax(n);
    vector<int> rmax(n);
    lmax[0]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>lmax[i-1]){
            lmax[i]=a[i];
        }
        else
            lmax[i]=lmax[i-1];
        //cout<<lmax[i]<<endl;
    }
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>rmax[i+1]){
            rmax[i]=a[i];
        }
        else
            rmax[i]=rmax[i+1];
        //cout<<rmax[i]<<endl;
    }
    for(int i=1;i<n-1;i++){
        res+=(min(lmax[i],rmax[i])-a[i]);
        cout<<res<<endl;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<trip_water(a);
    return 0;

}
