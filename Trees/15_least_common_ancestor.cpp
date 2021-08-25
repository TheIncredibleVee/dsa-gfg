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


bool findPath(Node *root, int key, vector<Node*> path){
    if(root==NULL){
        return false;
    }
    path.push_back(root);
    if(root->data==key){
        return true;
    }
    if(findPath(root->left,key,path)|| findPath(root->left, key, path)){
        return true;
    }
    path.pop_back();
    return false;
}


Node *lcaNaive(Node *root, int n1,int n2){
    vector<Node *> path1,path2;
    if(findPath(root, n1,path1)==false || findPath(root, n2,path2)==false){
        return NULL;
    }
    for(int i=0;i<path1.size()-1&& i<path2.size()-1;++i){
        if(path[i+1]!=pah2[i+1]){
            return path1[i];
        }
    }
    return NULL;
}

Node *lcs(Node *root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    Node* lca1=lca(root->left, n1,n2);
    Node *lca2=lca(root->right,n1,n2);
    if(lca1!=NULL&&lac2!=NULL){
        return root;
    }
    if(lac1!=NULL){
        return lca1;
    }
    else{
        return lca2;
    }
}

int main(){
    return 0;
}