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

bool cycle_det(vector<int> adj[], int v){
    int ctr=0;
    vector<int> indegree(v,0);
    for(int i=0;i<v;++i){
        for(auto x:adj[i]){
            indegree[x]++;
        }
    }
    queue<int> q;
    for(auto x:indegree){
        if(x==0){
            q.push(x);
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        ctr++;
        for(auto ve:adj[u]){
            indegree[ve]--;
            if(indegree[ve]==0){
                q.push(ve);
            }
        }
    }
    return (ctr!=v);
}


int main(){
    return 0;
}