#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> shortestPath(vector<int> adj[], int v, int s){
    vector<bool> visited(v+1, false);
    vector<int> res(v+1, INT_MAX);
    queue<int> q;
    q.push(s);
    visited[s]=true;
    res[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto x:adj[u]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
                res[x]=res[u]+1;
            }
        }
    }
}


int main(){
    return 0;
}