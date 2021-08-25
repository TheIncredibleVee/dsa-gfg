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

index=0;

Node *construct(vector<int> &in, vector<int> &pre,int s,int e){
    if(s>e){
        return NULL;
    }
    Node *root=new Node(pre[index]);
    int pos;
    for(int i=s;i<=e;++i){
        if(in[i]==root->data){
            pos=i;
            break;
        }
    }
    root->left=construct(in, pre,s, pos-1);
    root->left= construct(in,pre, pos+1, e);
    return root;
}

int main(){
    return 0;
}