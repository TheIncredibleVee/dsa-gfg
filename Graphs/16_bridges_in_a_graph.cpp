#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs_rec(vector<int> adj[], vector<int> &low, vector<int> &disc, vector<pair<int,int>> &res, int i, int parent){
    static int time=0;
    low[i]=disc[i]=time++;
    for(auto x:adj[i]){
        if(disc[x]==-1){
            dfs_rec(adj, low, disc, res, x,i);
            low[i]=min(low[i], low[x]);
            if(disc[i]<low[x]){
                res.push_back({i,v});
            }
        }else if(x!=parent){
            low[i]=min(low[i], low[x]);
        }
    }
}

vector<pair<int,int>> bridges(vector<int> adj, int v){
    vector<pair<int,int>> res;
    vector<int> dis(v,-1);
    vector<int> low(v,-1);
    for(int i=0;i<v;++i){
        if(dis[i]==-1){
            dfs_rec(adj,low, disc, res,i,-1);
        }
    }
    return res;
}

int main(){
    return 0;
}