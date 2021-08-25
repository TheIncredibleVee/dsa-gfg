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

void serailize(Node *root, vector<int> &ser){
    if(roo==NULL) {
        ser.push_back(-1);
        return;
    }
    else{
        ser.push_back(root->data);
        serailize(roo->left, ser);
        serailize(root->right, ser);
        return;
    }
    return;
}

int i=0;
Node *deseralize(vector<int> &ser){
    if(i==ser.size())
        return NULL;
    if(ser[i]==-1){
        i++;
        return NULL;
    }
    Node *root= new Node(ser[i]);
    i++;
    root->left= deseralize(ser);
    root->right= deseralize(ser);
    return root;

}

int main(){
    return 0;
}