#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u ,int v, int w){
    adj[u].push_back({v,w});
}

vector<int> bellman(vector<pair<int,int>> adj[], int v, int s){
    vector<int> res(v,INF);
    res[s]=0;
    for(int i=0;i<v-1;++i){
        for(int j=0;j<v;++j){
            for(auto x:adj[j]){
                if(res[j]!=INF && res[x.first]>res[j]+x.second){
                    res[x.first]=res[i]+x.second;
                }
            }
        }
    }
    return res;
}
int main(){
    return 0;
}