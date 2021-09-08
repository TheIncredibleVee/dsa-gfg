#include<bits/stdc++.h>

using namespace std;

vector<int> BFS_from_source(vector<int> adj[], int v,int s){
    vector<int> res;
    vector<bool> visited(v+1,false);
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        res.push_back(x);
        for(auto i:adj[x]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
    return res;
}

void BFS_rec(vector<int> &res, vector<int> adj[],int v, int i, vector<bool> &visited){
    queue<int> q;
    q.push(i);
    visited[i]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        res.push_back(v);
        for(auto u: adj[v]){
            if(!visited[u]){
                q.push(u);
                visited[u]=true;
            }
        }
    }
}

vector<int> BFS(vector<int> adj[], int v){
    vector<int> res;
    vector<bool> visited(v, false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            BFS_rec(res, adj,v, i,visited);
        }
    }
}

int num_connected_graphs(vector<int> adj[], int v){
    vector<int> res;
    int ans=0;
    vector<bool> visited(v+1, false);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            ans++;
            BFS_rec(res, adj,v, i,visited);
        }
    }
    return ans;
}

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

int main(){

    return 0;
}
