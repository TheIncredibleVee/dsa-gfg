#include<bits/stdc++.h>
using namespace std;

struct Node {
    int freq;
    char data;
    Node *left, *right;
    Node(int f, char c, Node *l=NULL, Node *r=NULL) {
        freq=f;
        data=c;
        left=l;
        right=r;
    }
};

void printCodes(Node *root, string s){
    if(root==NULL)
        return;
    if(root->data!='$'){
        cout<<root->data<<"\t"<<s<<endl;
    }
    printCodes(root->left,s+'0');
    printCodes(root->right,s+'1');
}

struct cmp{
    bool operator()(Node* a, Node* b){
        return a->freq > b->freq;
    }
};

void showpq(priority_queue<Node*, vector<Node*>, cmp> pq){
    priority_queue<Node *, vector<Node*>, cmp> p=pq;
    while(!p.empty()){
        Node *node=p.top();
        cout<<node->data<<"\t"<<node->freq<<endl;
        p.pop();
    }

}

void huffman(vector<pair<int, char>> &input){
    priority_queue<Node *, vector<Node*>, cmp> pq;
    for(int i=0; i<input.size();i++){
        pq.push(new Node(input[i].first,input[i].second));
    }
    //showpq(pq);
    while(pq.size()>1){
        Node *left= pq.top();
        pq.pop();
        Node *right= pq.top();
        pq.pop();
        int freq=left->freq+right->freq;
        Node *curr= new Node(freq, '$', left, right);
        pq.push(curr);
    }
    printCodes(pq.top(), "");
}


int	main()
{
    int n;
    cin>>n;
    vector<pair<int, char>> input(n);
    for (int i=0; i<n; i++)
        cin>>input[i].first>>input[i].second;
    // vector<pair<int, char>> input;
    // input.push_back(make_pair(30, 'a'));
    // input.push_back(make_pair(40, 'd'));
    // input.push_back(make_pair(80, 'e'));
    // input.push_back(make_pair(60, 'f'));
    huffman(input);
}
