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