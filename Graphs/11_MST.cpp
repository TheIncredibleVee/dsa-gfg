#include<bits/stdc++.h>
#define V 4
#define INF INT_MAX

using namespace std;

typedef pair<int, int> pi;

//using matrix
int MST_matrix(int adj[V][V]){
    vector<int> key(V,INF);
    key[0]=0;
    int res=0;
    vector<bool> mSet(V,false);
    for(int i=0;i<V;++i){
        int u=-1;
        for(int j=0;j<V;++j){
            if(!mSet[j] && (u==-1 || key[j]<key[u])){
                u=i;
            }
        }
        mSet[u]=true;
        res+=key[u];
        for(int v=0;v<V;v++){
            if(adj[u][v]!=0 && !mSet[v]){
                key[v]= min(key[v],adj[u][v]);
            }
        }
    }
    return res;
}


void addEdge(vector<pi> adj[], int u, int v,int w){
    adj[u].emplace_back(v,w);
    adj[v].emplace_back(u,w);
}

//using adj list and priority queue
int MST_list(vector<pi> adj[], int v){
    int res=0;
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0,0});
    vector<int> key(v,INF);
    vector<bool> mSet(v,false);
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        if(mSet[u]){
            continue;
        }
        mSet[u]=true;
        for(auto x: adj[u]){
            if(!mSet[x.first] && key[x.first]>x.second){
                res+=x.second;
                key[x.first]=x.second;
                pq.push({x.second,x.first});
            }
        }
    }
    return res;
}

int main(){
    vector<pi> adj[4];
    addEdge(adj,0,1,5);
    addEdge(adj,0,2,8);
    addEdge(adj,1,2,10);
    addEdge(adj,2,3,20);
    addEdge(adj,1,3,15);
    cout<<MST_list(adj,4);
    return 0;
}