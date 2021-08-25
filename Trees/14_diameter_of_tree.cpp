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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

int diameterNaive(Node *root){
    if(root==NULL){
        return 0;
    }
    int d=1+ height(roo->left)+ height(root->right);
    itn d1= diameter(root->left);
    int d2= diameter(root->right);
    int maxi=max(d,d1);
    return max(maxi,d2);
}

unordered_map<Node*, int> hm;
int precomp(Node *root){
    if(root==NULL){
        return 0;
    }
    int h=1+max(height(root->left), height(root->right));
    hm[root]=h;
    return h;
}
int diameterMap(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh=hm[root->left];
    int lh=hm[root->right];
    int d1=1+rh+lh;
    int d2= diameterMap(root->left);
    int d3= diameterMap(root->right);
    return max(d1,max(d2,d3));
}

int res=0;
int diameter(Node *root){
    if(root== NULL){
        return 0;
    }
    int d1= diameter(root->left);
    int d2= diameter(root->right);
    res= max(res, 1+d2+d1);
    return max(d1,d2)+1;
}

int diameterCaller(Node *root){
    int h= precomp(root);
    int ans= diameterMap(root);
    return ans;
}

int main(){
    return 0;
}