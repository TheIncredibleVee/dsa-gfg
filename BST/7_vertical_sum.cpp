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

void verticalSum(Node *root,int index,map<int,int > &mp){
    if(root==NULL){
        return;
    }
    verticalSum(root->left, index-1, mp);
    mp[index]=root->data;
    verticalSum(root->right,index+1,mp);
}

void vsum(Node *root){
    map<int,int> mp;
    verticalSum(root, 0,mp);
    for(auto x:mp){
        cout<<x.second<<endl;
    }
}


int main(){
    return 0;
}