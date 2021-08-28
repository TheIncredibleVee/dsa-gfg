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

bool search(Node *root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(roo->data>key){
        return (search(root->left,key));
    }
    else{
        return (search(root->right,key));
    }
}

Node * insert(Node *root, int key){
    if(root==NULL){
        root=new Node(key);
        return root;
    }
    if(roo->data==key){
        return root;
    }
    if(root->data>key){
        root->left = insert(root->left,key);
    }
    else{
        root->right= insert(root->right, key);
    }
    return root;
}

void insertIter(Node *root, int key){
    Node *temp=root;
    while(temp!=NULL){
        if(temp->data==key){
            break;
        }
        if(temp->data>key){
            if(temp->left==NULL){
                temp->left=new node(key);
                break;
            }
            else{
                temp=temp->left;
            }
        }
        else{
            if(temp->right==NULL){
                temp->right=new Node(key);
                break;
            }
            else{
                temp=temp->right;
            }
        }
    }
}

Node *del(Node *root, int key){
    if(root==NULL){
        return root;
    }
    if(root->data>key){
        root->left=del(root->left,key);
    }
    else if(root->data<key){
        root->right=del(root->right,key);
    }
    else{
        if(!root->left){
            Node *temp=root->right;
            delete (root);
            return temp;
        }
        else if(!root->right){
            Node *temp=root->left;
            delete (root);
            return temp;
        }
        else{
            Node *suc=getSucessor(root);
            if(!suc){
                suc=getPredessor(root);
                if(!suc){
                    delete(root);
                    return NULL;
                }
            }
            root->data=suc->data;
            root->right=del(root->right,root->data);
            return root;
        }
    }
}

Node* searchFloor(Node *root, int key){
    if(!root){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        return searchFloor(root->left, key);
    }else{
        Node *ans=root;
        Node *rec=searchFloor(root->right,key);
        if(!rec){
            return root;
        }
        else{
            return rec;
        }
    }
}

Node *floorIter(Node *root, int key){
    Node *ans=NULL;
    while(!root){
        if(root->data==key){
            return root;
        }
        else if(root->data>key){
            root=root->left;
        }
        else{
            ans=root;
            root=root->right;
        }
    }
    return ans;
}

Node *ceilIter(Node *root, int key){
    Node *ans=NULL;
    while(!root){
        if(root->data==key){
            return root;
        }
        else if(root->data>key){
            ans=root;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return ans;
}
Node *getSucessor(Node *curr){
    curr=curr->right;
    while(!curr&&!curr->left){
        curr=curr->left;
    }
    return curr;

}

Node *getPredessor(Node *curr){
    curr=curr->left;
    while(!curr&&!curr->right){
        curr=curr->right;
    }
    return curr;
}
int main(){
    return 0;
}