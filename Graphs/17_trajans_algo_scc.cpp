#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int v, int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs_rec(vector<int> adj[], vector<int> &low, vector<int> &disc, int i, int parent, stack<int> &s, vector<vector<int>> &res,vector<bool> &visited){
    static int time=0;
    low[i]=disc[i]=time++;
    s.push(i);
    visited[i]= true;
    for(auto x:adj[i]){
        if(disc[x]==-1){
            dfs_rec(adj, low,disc, x, i, s,res,visited);
            low[i]=min(low[i], low[x]);
        }
        else if(!visited[x]){
            low[i]= min(low[i], low[x]);
        }
    }
    int x=s.top();
    if(low[i]==disc[i]){
        vector<int> temp;
        while(s.top()!=i){
            x=s.top();
            temp.push_back(x);
            visited[x]=false;
            s.pop();
        }
        temp.push_back(s.top());
        visited[s.top()]=false;
        s.pop();
        res.push_back(temp);
    }
}

vector<vector<int>> scc(vector<int> adj[], int v){
    vector<vector<int>> res;
    vector<int> disc(v,-1);
    vector<int> low(v,-1);
    vector<bool> visites(v, false);
    stack<int> s;
    for(int i=0;i<v;++i){
        if(disc[i]==-1){
            dfs_rec(adj, low, disc, i, -1,s,res,visited);
        }
    }
    return res;
}


int main(){
    return 0;
}