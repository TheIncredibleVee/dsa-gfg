#include <bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* next;
    Node(char x){
        data=x;
        next=NULL;
    }
};

bool isPalindrome(Node *head){
    stack<char> st;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
        st.push(curr->data);
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(st.top()!=curr->data)
            return false;
        st.pop();
    }
    return true;
}

Node *revList(Node *head){
    if(head== NULL || head->next== NULL){
        return head;
    }else{
        Node *restHead= revRec(head->next);
        Node *restTail= head->next;
        restTail->next=head;
        head->next=NULL;
        return restHead;
    }
}

bool isPali(Node *head){
    if(head==NULL){
        return true;
    }
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *curr=head;
    Node *rev= revList(slow->next);
    while(rev!=NULL){
        if(curr->data!=rev->data){
            return false;
        }
        curr=curr->next;
        rev=rev->next;
    }
    return true;
}

int main()
{
    Node *head=new Node('g');
    head->next=new Node('f');
    head->next->next=new Node('g');
    if(isPalindrome(head))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
