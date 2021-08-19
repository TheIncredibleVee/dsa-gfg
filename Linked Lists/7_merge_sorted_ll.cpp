#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *merge(Node *h1, Node *h2){
    if(h1==NULL|| h2== NULL){
        return h1==NULL?h2:h1;
    }
    Node *head=NULL;
    Node *tail= NULL;
    if(h1->data<h2->data){
        head=h1;
        tail=head;
        h1=h1->next;
    }
    else{
        head=h2;
        tail=head;
        h2=h2->next;
    }
    while(h1!=NULL && h2!= NULL){
        if(h1->data<h2->data){
            tail->next=h1;
            tail=h1;
            h1=h1->next;
        }
        else{
            tail->next=h2;
            tail=h2;
            h2=h2->next;
        }
    }
    if(h1!=NULL){
        tail->next=h1;
    }

    if(h2!=NULL){
        tail->next=h2;
    }
    return head;
}

int main(){
    return 0;
}
