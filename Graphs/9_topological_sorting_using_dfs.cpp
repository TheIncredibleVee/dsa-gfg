#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
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

void dfs_rec(vector<int> adj[], int u, stack<int> &s, vector<bool> &visited){
    visited[u]=true;
    for(auto x:adj[u]){
        if(!visited[x]){
            dfs_rec(adj, x, s,visited);
        }
    }
    s.push(u);
}

vector<int> topological_sort_dfs(vector<int> adj[], int v){
    vector<int> res;
    stack<int> s;
    vector<bool> visited(v,false);
    for(int i=0;i<v;++i){
        if(!visited[i]){
            dfs_rec(adj, i,s,visited);
        }
    }
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    return res;
}

int main(){
    return 0;
}