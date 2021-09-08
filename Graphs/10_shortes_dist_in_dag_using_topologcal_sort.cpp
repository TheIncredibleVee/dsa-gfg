#include<bits/stdc++.h>
#define INF INT_MAX

using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int weight){
    adj[u].push_back({v, weight});
}

void printEdges(vector<pair<int,int>> adj[], int n){
    for(int i=0;i<n;i++){
        for(auto x:adj[i]){
            cout<<x.first<<"\t with weight "<<x.second<<"\t";
        }
        cout<<"\n";
    }
}

vector<int> topological_sort(vector<pair<int,int>> adj[], int v){
    vector<int> res;
    vector<int> indegree(v,0);
    for(int i=0;i<v;++i){
        for(auto x:adj[i]){
            indegree[x.first]++;
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
        res.push_back(u);
        for(auto ve:adj[u]){
            indegree[ve.first]--;
            if(indegree[ve.first]==0){
                q.push(ve.first);
            }
        }
    }
    return res;
}

vector<int> shortestPathDag(vector<pair<int,int>> adj[],int v,int s){
    vector<bool> visited(v,false);
    vector<int> res(v,INF);
    res[s]=0;
    vector<int> tSort=topological_sort(adj,v);
    for(auto x: tSort){
        for(auto y: adj[x]){
            if(res[x]!=INF && res[y.first]>res[x]+y.second){
                res[y.first]=res[x]+y.second;
            }
        }
    }
    return res;
}

void printVector(vector<int> &x){
    for(auto a:x){
        if(a==INF){
            cout<<"INF\t";
        }
        else
            cout<<a<<"\t";
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>> adj[6];
    addEdge(adj,0, 1, 2);
    addEdge(adj,0, 4, 1);
    addEdge(adj,1, 2, 3);
    addEdge(adj,4, 2, 2);
    addEdge(adj,4, 5, 4);
    addEdge(adj,2, 3, 6);
    addEdge(adj,5, 3, 1);
    int s = 1;
    cout << "Following are shortest distances from source " << s <<" \n";
    vector<int> ans=shortestPathDag(adj, 6,s);
    printVector(ans);
    return 0;
}