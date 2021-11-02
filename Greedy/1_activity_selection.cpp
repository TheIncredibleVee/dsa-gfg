#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int ,int> b){
    return a.second<b.second;
}

int activity(pair<int, int> input[], int n){
    int res=1;
    sort(input,input +n, cmp);
    int prev=0;
    for(int i = 1; i < n; i++){
        if(input[i].first>=input[prev].second){
            res++;
            prev=i;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    pair<int, int> input[n];
    for(int i = 0; i < n; i++){
        cin>>input[i].first;
        cin>>input[i].second;
    }
    int res= activity(input,n);
    cout<<res;
    return 0;
}