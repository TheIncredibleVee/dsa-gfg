#include<bits/stdc++.h>
#define NIL -1


using namespace std;

void addEdge(vector<int> adj[], int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs_rec(vector<int> adj[],vector<int> &parent,int i, vector<int> &low, vector<int > &dis, vector<bool> &art){
    static int time=0;
    low[i]=disc[i]=time;
    time++;
    int children=0;
    for( auto x:adj[i]){
        if(disc[x]==NIL){
            children++;
            dfs_rec(adj, parent, x, low, dis,art);
            parent[x]=i;
            low[i]=min(low[x], low[i]);
            if(children>1 && parent[i]==NIL){
                art[i]=true;
            }
            if(parent[i]!=NIL && disc[i]<=low[x]){
                art[i]=true;
            }
        }
        else if(x!=parent[u]){
            low[i]=min(low[i], disc[x]);
        }
    }
}

vector<int> articulationpt(vector<int> adj[], int v ){
    vector<bool> res(v,false);
    vector<int> low(v,NIL);
    vector<int> dis(v,NIL);
    vector<int> par(v,NIL);
    for(int i=0;i<v;++i){
        if(dis[i]==NIL){
            dfs_rec(adj,par, i, low, dis, res);
        }
    }
    return res;
}

int main(){
    return 0;
}