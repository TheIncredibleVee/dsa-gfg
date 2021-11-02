#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first>b.first;
}

int fractional_knapsack(vector<int> &weights, vector<int> &values, int weight, int n){
    int res=0;
    vector<pair<int,int> > val(n);
    for(int i=0; i<n; i++){
        val[i].first= values[i]/weights[i];
        val[i].second= i;
        cout<<val[i].first<<endl<<val[i].second<<endl;
    }
    sort(val.begin(), val.end(),cmp);
    int cnt=0;
    while(weight>0){
        if(weights[val[cnt].second]>weight){
            res+= weight*val[cnt].first;
            weight=0;
        }else{
            res+= weights[val[cnt].second]*val[cnt].first;
            weight-=weights[val[cnt].second];
        }
    }
    return res;
}



int main(){
    int n;
    cin>>n;
    vector<int> weights(n);
    vector<int> values(n);
    for(int i = 0; i < n;i++){
        cin>>weights[i];
        cin>>values[i];
    }
    int w;
    cin>>w;
    int res= fractional_knapsack(weights, values,n,w);
    cout<<res;
    return 0;
}