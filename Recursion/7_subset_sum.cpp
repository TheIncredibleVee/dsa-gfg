#include <bits/stdc++.h>

using namespace std;

int subset_sum(vector<int> &a,int currsum,int index,int sum){
    if(index==(a.size())){
        if(currsum==sum) {
            return 1;
        }
        else
            return 0;
    }
    else{
        return subset_sum(a,currsum+a[index],index+1,sum)+ subset_sum(a,currsum,index+1,sum);
    }
}

int optmized_subset_sum(vector<int> &a, int n,int sum){
    if(n==0)
        return (sum==0)?1:0;
    else{
        return optmized_subset_sum(a,n-1,sum)+ optmized_subset_sum(a,n-1,sum-a[n-1]);
    }
}
int main(){
    int n,sum;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cin>>sum;
    int curr=0;
    cout<<subset_sum(a,curr,0, sum)<<endl<<optmized_subset_sum(a,n,sum);
    return 0;
}

