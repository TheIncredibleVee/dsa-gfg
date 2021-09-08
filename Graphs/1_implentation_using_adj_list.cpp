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

int main(){
    int v=4;
    vector<int> adj[v];
    addEdge(adj, 0,1);
    addEdge(adj, 2,1);
    printEdges(adj, 4);
    return 0;
}