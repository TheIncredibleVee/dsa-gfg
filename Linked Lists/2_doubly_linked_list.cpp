#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *insertBegin(Node *head,int x){
    Node *temp= new Node(x);
    if(head==NULL){
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return head;
}

Node *insertEnd(Node *head,int x){
    Node *temp= new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}

Node *revList(Node *head){
    if(head==NULL ||head->next==NULL){
        return head;
    }
    Node *curr=head;
    Node *temp=NULL;
    while(curr->next!=NULL){
        temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        curr=temp;
    }
    return head;
}

Node *delHead(Node * head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node *temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
    return head;
}

Node *delEnd(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL:
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node *temp= curr;
    curr->prev->next=NULL;
    delete(temp);
    return head;
}

int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printlist(head);
    return 0;
}
