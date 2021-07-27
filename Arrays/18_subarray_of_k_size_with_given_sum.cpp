#include <bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool is_sum(vector<int> &a, int k, int  sum){
    int res=0;
    for(int i=0;i<k;++i){
        res+=a[i];
    }
    if(res==sum)
        return true;
    for(int i=k;i<a.size();++i){
        res+=a[i];
        res-=a[i-k];
        if(res==sum)
            return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int k,sum;
    cin>>k>>sum;
    print_yes_no(is_sum(a,k,sum));
    return 0;
}
