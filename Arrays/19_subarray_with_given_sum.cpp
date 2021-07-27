#include <bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool is_sum(vector<int>&a,int sum){
    int res=a[0];
    if(res==sum){
        return true;
    }
    int start=0;
    for(int end=1;end<a.size();++end){
        while(start<end-1&&res>sum){
            res-=a[start++];
        }
        if(res==sum){
            return true;
        }
        if(end<a.size()){
            res+=a[end];
        }
    }
    return res==sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    print_yes_no(is_sum(a,sum));
    return 0;
}

