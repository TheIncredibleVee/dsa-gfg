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

void preorder(Node *root, vector<int> &res){
    if(root==NULL){
        return;
    }else{
        res.push_back(root->data);
        preorder(root->left,res);
        preorder(root->right,res);
    }
}

void inorder(Node *root, vector<int> &res){
    if(root==NULL){
        return;
    }else{
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
}

void postorder(Node *root, vector<int> &res){
    if(root==NULL){
        return;
    }
    else{
        postorder(root->left,res);
        postorder(root->right, res);
        res.push_back(root->data);
    }
}

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    vector<int> ans;
    postorder(root,ans);
    print_vector(ans);
    return 0;
}