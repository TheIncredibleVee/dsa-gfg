#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void printEdges(vector<int> adj[], int n){
    for(int i=0;i<n;i++){
        for(auto x:adj[i]){
            cout<<x<<"\t";
        }
        cout<<"\n";
    }
}

bool dfs_rec(vector<int > adj[], int s, vector<bool> &visited,int parent){
    visited[s]=true;
    for(auto x:adj[s]){
        if(!visited[x]){
            if(dfs_rec(adj, x,visited,s))
                return true;
        }
        else if(x!=parent){
            return true;
        }
    }
    return false;
}


bool cycleDFS(vector<int> adj[], int v){
    vector<bool> visited(v, false);
    for(int i=0;i<v;++i){
        if(!visited[i]){
            if(dfs_rec(adj, i, visited,-1)){
                return true;
            }
        }
    }
    return false;
}

bool BFS(vector<int> adj[], vector<bool> &visited, int s){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visited[u]){
                q.push(v);
                visited[v]=true;
            }
            else if(v!=u){
                return true;
            }
        }
    }
    return false;
}

bool cycleBFS(vector<int> adj[], int v){
    vector<bool> visited(v, false);
    for(int i=0;i<v;++i){
        if(!visited[i]){
            if(BFS(adj,visited, i)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    return 0;
}