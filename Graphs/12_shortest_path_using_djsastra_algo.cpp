#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

vector<int> djastra(vector<pair<int,int>> adj[], int v ,int s){
    vector<int> res(v, INF);
    res[s]=0;
    vector<bool> visited(v,false);
    visited[s]=true;
    priority_queue<pair<int,int>, vector<pair<int,int>, greater<pair<int,int>> pq;
    pq.push({s,0});
    while(!q.empty()){
        int u=pq.top().second;
        q.pop();
        if(visited[u]){
            continue;
        }
        visited[u]=true;
        for(auto x:adj[u]){
            if(!visited[x.first]&&res[x.first]>res[u]+x.second){
                res[x.first]=res[u]+x.second;
                pq.push({res[x.first],x.first});
            }
        }
    }
    return res;
}


vector<int> djastra_matrix(adj[][], int V, int s){
    vector<int> dist(V,INT_MAX);
    dist[src]=0;
    vector<bool> fin(V,false);

    for (int count = 0; count < V-1 ; count++)
    {
        int u = -1;

        for(int i=0;i<V;i++)
            if(!fin[i]&&(u==-1||dist[i]<dist[u]))
                u=i;
        fin[u] = true;

        for (int v = 0; v < V; v++)

            if (graph[u][v]!=0 && fin[v] == false)
                dist[v] = min(dist[v],dist[u]+graph[u][v]);
    }
    return dist;
}

int main(){
    return 0;
}