#include<bits/stdc++.h>

using namespace std;

int preSum(vector<int> &BIT, int index){
    int sum =0;
    index++;
    while(index>0){
        sum+=BIT[index];
        index-=index&(-index);
    }
    return sum;
}

void update(vector<int> &BIT, int index,int val){
    index++;
    while(index<BIT.size()){
        BIT[index]+=val;
        index+=index&(-index);
    }
}


void constBIT(vector<int> &BIT, vector<int> &arr, int n){
    for(int i=0;i<n;++i){
        update(BIT,i,arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> BIT(n+1,0);
    constBIT(BIT,v,n);
    return 0;
}