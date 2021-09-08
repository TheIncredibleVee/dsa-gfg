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

bool dfs_rec(vector<int> adj[], vector<bool> &visited, vector<bool> &recStack, int s){
    visited[s]=true;
    recStack[s]=true;
    for(auto x: adj[s]){
        if(!visited[x] && dfs_rec(adj, visited,recStack,x)){
            return true;
        }
        else if(recStack[s]){
            return true;
        }
    }
    recStack[s]=false;
    return false;
}

bool cycle_dfs(vector<int> adj[], int v){
    vector<bool> visited(v,false);
    vector<bool> recStack(v, false);
    for(int i=0;i<v;++i){
        if(dfs_rec(adj, visited, recStack, i)){
            return true;
        }
    }
    return false;
}

bool bfs_rec(vector<int> adj[],int v, int s, vector<bool> &visited){
    queue<int> q;
    vector<bool> recStack(v,false);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        visited[u]=true;
        recStack[u]=true;
        for( auto x:adj[u]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
                recStack[x]=true;
            }
            else if(recStack[x]){
                return true;
            }
        }
    }
    return false;
}


bool cycle_bfs(vector<int> adj[], int v){
    vector<bool> visited(v,false);
    for(int i=0;i<v;++i){
        if(!visited[i]){
            if(bfs_rec(adj,v, i,visited)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    return 0;
}