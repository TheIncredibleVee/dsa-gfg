#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

void topSort(vector<int> adj[],int i, vector<bool> &visited, stack<int> &s){
    visited[i]=true;
    for(auto x:adj[i]){
        if(visited[x])
            topSort(adj, x,visited,s);
    }
    s.push(i);
}

void transpose(vector<int> adj[],int v){
    vector<int> res[v];
    for(int i=0;i<v;++i){
        for(auto x:adj[i]){
            res[x].push_back(i);
        }
    }
    adj=res;
}

void dfs_rec(vector<int> adj[], vector<bool> &visited, int i, vector<int> &res){
    visited[i]=true;
    res.push_back(i);
    for(auto x:adj[i]){
        if(!visited[x]){
            dfs_rec(adj, visited,x,res);
        }
    }
}

vector<vector<int>> kosaraju(vector<int> adj[], int v){
    vector<bool> visited(v,false);
    stack<int> s;
    for(int i=0;i<v;++i){
        if(visited[i])
            topSort(adj,0,visited,s);
    }
    transpose(adj, v);
    int index=0;
    for(auto x:visited){
        x=false;
    }
    vector<vector<int>> res;
    while(!s.empty()){
        if(!visited[s.top()]) {
            vector<int> ans;
            dfs_rec(adj, visited, s.top(), ans);
            res.push_back(ans);
            s.pop();
        }
    }
    return res;
}

int main(){
    return 0;
}