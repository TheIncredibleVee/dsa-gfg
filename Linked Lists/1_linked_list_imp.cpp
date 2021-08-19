#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertBegin(Node * head, int data){
    Node temp=new Node(data);
    temp->next=temp;
    return temp;
}

Node *insertEnd(Node * head, int data){
    Node temp=new Node(data);
    if(head==NULL){
        return temp;
    }
    Node * curr= head;

    while(curr->next!=NULL){
        curr=cur->next;
    }
    curr->next=temp;
    return head;
}

Node *delHead(Node *head){
    if(head==NULL){
        return NUll;
    }
    Node * temp=head;
    head=head->next;
    delete(temp);
    return head;
}

Node *delLast(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr= head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    Node *temp= curr->next;
    curr->next=NULL;
    delete()
}

Node *insertatgiven(Node *head,int data, int k){

    Node temp=new Node(data);
    if(k==1){
        temp->next=temp;
        return temp;
    }
    else{
        Node * curr= head;
        for(int i=1;i<k-1&& curr!=NULL;++k){
            curr=curr->next;
        }
        if(curr==NULL)
            return head;
        temp->next=curr->next;
        curr->next=temp;
    }
    return head;
}

int *search_it(Node *head, int key){
    if(head==NULL){
        return -1;
    }
    Node* curr=head;
    int res=1;
    while(curr->next!=NULL){
        if(curr->data==key){
            return curr;
        }
        res++;
    }
    return -1;
}

int *search_rec(Node *head, int key){
    if(head==NULL){
        return -1;
    }
    if(head->data){
        return head;
    }else{
        int res=search_rec(head->next, key);
        return res==-1?-1:res+1;
    }
}


void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void pirnt_rec(Node *head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    print_rec(head->next);
}

int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    printlist(head);
    return 0;
}