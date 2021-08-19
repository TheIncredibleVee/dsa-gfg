#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insertSorted(Node *head, int x){
    Node *temp= new Node(x);
    if(head==NULL){
        return temp;
    }
    if(head->data>x){
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL && curr->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int middle(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast->next!=NULL&& fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

int nthFromEnd(Node *head, int n){
    if(head==NULL){
        return -1;
    }
    Node *fast=head;
    Node *slow=head;
    for(int i=0;i<n && fast!=NULL;++i){
        fast=fast->next;
    }
    if(fast==NULL){
        return -1;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    return slow->data;
}

Node *revList(Node *head){
    if(head==NULL || head->next==NULL)
        return head;
    Node *curr= head->next;
    Node *prev=head;
    Node *temp=head;
    head->next=NULL;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;

    }
    return prev;
}

Node *revRec(Node *head){
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

Node *rev(Node *curr, Node *prev){
    if(curr==NULL)
        return prev;
    if(curr->next==NULL){
        return curr;
    }
    else{
        Node *temp=curr->next;
        curr->next=prev;
        return rev(temp,curr);
    }
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

Node *remDupSorted(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        if(curr->next->data==curr->data){
            //Option 1 use function written earlier curr->next=delHead(curr->next);
            //Option 2 below code
            Node * temp= curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
    }
    return head;
}

Node *revGrpK(Node *head, int k){
    Node *curr= head;
    Node *prev=curr;
    Node *next=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){
        Node *restHead= revGrpK(next, k);
        head->next=restHead;
    }
    return prev;
}

bool isLoop(Node* head)
{   Node* temp=new Node(0);
    Node *curr=head;
    while (curr != NULL) {
        if (curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;
}


bool isLoopHash(Node* head)
{
    unordered_set<Node*> s;
    for(Node *curr=head;curr!=NULL;curr=curr->next) {
        if (s.find(curr) != s.end())
            return true;
        s.insert(curr);
    }
    return false;
}

bool isLoopFloydCycle(Node *head){
    Node *slow =head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

Node *detRemLoop(Node *head){
    Node *slow =head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            break;
        }
    }
    if(fast!=slow){
        return;
    }
    slow=head;
    while(slow->next!=fast->next){
        slow=sloe->next;
        fast=fast->next;
    }
    fast->next=NULL;
    return head;
}

void delGivenNode(Node *del){
    del->data=del->next->data;
    Node *temp= del->next;
    del->next=del->next->next;
    delete(temp);
}

Node *segregateEvenOdd(Node * head){
    Node *es=NULL;
    Node *ee=NULL;
    Node *os=NULL;
    Node *oe=NULL;
    Node *curr=head;
    while(curr->next!=NULL){
        if(curr->data%2){
            if(os==NULL){
                os=curr;
                oe=curr;
            }
            else{
                oe->next=curr;
                oe=oe->next;
            }
        }else{
            if(es==NULL){
                es=curr;
                ee=curr;
            }
            else{
                ee->next=curr;
                ee=ee->next;
            }
        }
        curr=curr->next;
    }
    if(os==NULL || es==NULL)
        return head;
    ee->next=os;
    oe->next=NULL;
    return es;
}

Node *getInt(Node *h1, Node *h2){
    Node *curr=h1;
    int c1=1,c2=1;
    while(curr->next!=NULL){
        c1++;
    }
    curr=h2;
    while(curr->next!=NULL){
        c2++;
    }
    int d=abs(c1-c2);
    if(c1>c2){
        curr=h1;
    }
    else{
        curr=h2;
    }
    while(d--){
        curr=curr->next;
    }
    Node *curr2=c1>c2?h2:h1;
    while(curr!=NULL &&curr2!=NULL){
        if(curr==curr2){
            return curr;
        }
        curr=curr->next;
        curr2=curr2->next;
    }
    return NULL;
}


void pairwiseSwap(Node *head){
    Node *curr=head;
    while(curr!=NULL&&curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
}

Node *pairwise(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *curr=head->next->next;
    Node *prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        Node * next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    return head;
}

Node* clone(Node *head)
{
    unordered_map<Node*,Node*> hm;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
        hm[curr]=new Node(curr->data);

    for(Node *curr=head;curr!=NULL;curr=curr->next){
        Node *cloneCurr=hm[curr];
        cloneCurr->next=hm[curr->next];
        cloneCurr->random=hm[curr->random];
    }
    Node *head2=hm[head];

    return head2;
}

Node* cloneEff(Node *head)
{
    Node *next,*temp;
    for(Node *curr=head;curr!=NULL;){
        next=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next->next){
        curr->next->random=(curr->random!=NULL)?(curr->random->next):NULL;
    }

    Node* original = head, *copy = head->next;

    temp = copy;

    while (original && copy)
    {
        original->next =
                original->next? original->next->next : original->next;

        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
    }

    return temp;
}

int main(){
    return 0;
}