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

void vTraversal(Node *root){
    Node *curr=root;
    queue<pari<Node *,int>> q;
    q.push({root,0});
    map<int, vector<int>> mp;
    while(!q.empty()){
        Node *curr=q.front().first;
        int index=q.front().second;
        mp[index].push_back(curr->data);
        q.pop();
        if(curr->left){
            q.push({curr->left,index-1});
        }
        if(curr->right){
            q.push({curr->right,index+1});
        }
    }
}

int main(){
    return 0;
}