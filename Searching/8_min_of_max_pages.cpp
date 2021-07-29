#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> &a, int start, int end){
    int sum=0;
    for(int i=start;i<=end;++i){
        sum+=a[i];
    }
    return sum;
}

int min_pages_rec(vector<int> &a,int n, int k){
    if(k==1)
        return sum(a,0,n-1);
    if(n==1)
        return a[0];
    int res=INT_MAX;
    for(int i=1;i<n;++i){
        res=min(res,max(min_pages_rec(a,i,k-1),sum(a,i,n-1)));
    }
    return res;
}

bool is_possible(vector<int> &a, int k, int sum){
    int stu=1;
    int curr_sum =0;
    for(int i=0;i<a.size();++i){
        if(curr_sum+a[i]>sum){
            stu++;
            curr_sum=a[i];
        }
        else{
            curr_sum+=a[i];
        }
    }
    //cout<<sum<<"\t"<<stu<<"\t"<<k<<endl;
    return (stu<=k);
}

int mx(vector<int> &a){
    int max=a[0];
    for(int i=1;i<a.size();++i){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int min_pages_bin(vector<int> &a,int k ,int n){
    int res,mid;
    int low=mx(a);
    int high= sum(a,0,n-1);
    while(high>=low){
        mid=(high+low)/2;
       // cout<<mid<<endl;
        if(is_possible(a,k,mid)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
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
    int k;
    cin>>k;
    cout<<min_pages_rec(a,n,k)<<endl<<min_pages_bin(a,k,n);
    return 0;
}
