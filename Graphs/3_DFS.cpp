#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void printEdges(vector<int> adj[], int n){
    for(int i=0;i<n;i++){
        for(auto x:adj[i]){
            cout<<x<<"\t";
        }
        cout<<"\n";
    }
}

void dfs_rec(vector<int> &res, vector<int> adj[], int i,vector<bool> &visited){
    res.push_back(i);
    visited[i]= true;
    for(auto x: adj[i]){
        if(!visited[x]){
            dfs_rec(res, adj, x,visited);
        }
    }
}


vector<int> DFS(vector<int> adj[],int v,int s){
    vector<int> res;
    vector<bool> visited(v, false);
    dfs_rec(res, adj, s,visited);
    return res;
}

int main(){
    return 0;
}