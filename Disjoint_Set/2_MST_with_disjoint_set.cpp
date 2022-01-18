#include<bits/stdc++.h>

using namespace std;

class disjoint_set {
    vector<int> parent;
    vector<int> rank;
    public:
        int find(int x){
            if(parent[x]==x){
                return x;
            }
            else{
                parent[x] = x;
                return parent[x];
            }
        }
        void init(int n){
            parent.resize(n);
            rank.resize(n);
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=0;
            }
        }
        void uni(int x,int y){
            int x_root=find(x);
            int y_root=find(y);
            if(rank[x_root]>rank[y_root]){
                parent[y_root]=x_root;
            }
            else if (rank[x_root]<rank[y_root]){
                parent[x_root]=y_root;
            }
            else{
                parent[y_root]=x_root;
                rank[x_root]++;
            }
        }
};


struct edge{
    int src, dst,weight;
    edge(int s, int d, int w){
        src=s; 
        dst=d;
        weight=w;
    }
};

bool comapare(edge x, edge y){
    return x.weight<y.weight;
}

int MST(vector<edge> arr){
    sort(arr.begin(), arr.end(), comapare);
    int n=arr.size();
    disjoint_set ds;
    ds.init(n);
    int ans=0;
    for(int i=0, temp=0;temp<n-1;i++){
        int src= ds.find(arr[i].src);
        int dst= ds.find(arr[i].dst);
        if(src!=dst){
            temp++;
            ds.uni(src,dst);
            ans+=arr[i].weight;
        }
    }
    return ans;
}