#include<bits/stdc++.h>
#define ver 4
using namespace std;

vector<int> indeg(ver, 0);    //method 1

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    indeg[v]++;                 //method 1
}

void printEdges(vector<int> adj[], int n){
    for(int i=0;i<n;i++){
        for(auto x:adj[i]){
            cout<<x<<"\t";
        }
        cout<<"\n";
    }
}

vector<int> topological_sort(vector<int> adj[], int v){
    vector<int> res;
    //method 2 for indeg calc
    vector<int> indegree(v,0);
    for(int i=0;i<v;++i){
        for(auto x:adj[i]){
            indegree[x]++;
        }
    }
    //method 2 ends here
    //vector<bool> visited(v,false);              //the use of visited is not required
    queue<int> q;
    for(auto x:indegree){
        if(x==0){
            q.push(x);
            //visited[x]=true;
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        res.push_back(u);
        for(auto ve:adj[u]){
            //if(!visited[ve]){
                indegree[ve]--;
                if(indegree[ve]==0){
                    q.push(ve);
                    //visited[ve]=true;
                }
            //}
        }
    }
    return res;
}

int main(){
    return 0;
}