#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printRec(Node *head){
    if(head==NULL){
        return head;
    }
    /*
     * Node *curr=head;
     * do{
     *      cout<<curr->data<<" ";
     *      curr=curr->next;
     *  }while(curr!=head);
     */
    cout<<head->data<<" ";
    Node *curr=head->next;
    while(curr!=head){                              //do while can also be used............
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node *insertBeg(Node *head, int x){
    /*  Naive
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    Node *tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    tail->next=temp;
    temp->next=head;
     return temp;
    Naive Code Ends */
    if(head==NULL){
        Node *temp = new Node(x);
        temp->next=temp;
        return temp;
    }
    int val=head->data;
    head->data=x;
    Node *temp = new Node(val);
    temp->next=head->next;
    head->next=temp;
    return head;
}

Node *insertEnd(Node *head,int x){
    if(head==NULL){
        Node *temp = new Node(x);
        temp->next=temp;
        return temp;
    }
    int val=head->data;
    Node *temp= new Node(val);
    head->data=x;
    temp->next=head->next;
    head->next=temp;
    return temp;
}

Node *delHead(Node *head){
    if(head==NULL){
        return  NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }
    head->data=head->next->data;
    Node *temp= head->next;
    head->next=head->next->next;
    delete(temp);
    return head;
}

Node *delKthNode(Node *head, int k){
    if(head==NULL)
        return NULL;
    if(k==1){
        return delHead(head);
    }
    Node *curr=head;
    bool flag=true;
    for(int i=1;i<k-2;++i){
        if(curr==NULL){
            flag=false;
            break;
        }
        curr=curr->next;
    }
    if(!flag){
        return head;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete(temp);
    return head;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    return 0;
}
