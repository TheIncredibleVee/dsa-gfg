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

int res=0;

int burnLeaf(Node *root, int key, int &dist){
    if(root==NULL){
        return 0;
    }
    if(root->data==key){
        dist=0;
        return 1;
    }
    int ld=-1;
    int rd=-1;
    int lh= burnLeaf(root->left, key,ld);
    int rh= burnLeaf(root->right,key, rd);
    if(ld!=-1){
        dist=ld+1;
        res=max(des+rh,res);
    }
    else if(rd!=-1){
        dist=rd+1;
        res= max(dist+lh,res);
    }
    return max(lh,rh)+1;
}


int main(){
    return 0;
}
