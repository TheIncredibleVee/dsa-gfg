#include<bits/stdc++.h>

using namespace std;


struct Node{
    Node *right;
    Node *left;
    int data;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

int index=0;

Node *create(vector<int> &in, vector<int> &pre, int s,int e){
    if(s>e){
        return NULL;
    }
    for(int i=s;i<e;i++){
        
    }
}

int main(){
    return 0;
}