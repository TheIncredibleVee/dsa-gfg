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

void treeToList(Node *root, vector<int> &list)
{
    if (root == NULL)
        return;

    treeToList(root->left, list);
    list.push_back(root->key);
    treeToList(root->right, list);
}

bool isPairPresent(Node *root, int target)
{
    vector<int> a2;

    treeToList(root, a2);

    int start = 0;

    int end = a2.size() - 1;

    while (start < end) {

        if (a2[start] + a2[end] == target)
        {
            cout<<"Pair Found: " << a2[start] << " + " << a2[end] << " "
                << "= " << target;
            return true;
        }

        if (a2[start] + a2[end] > target) // decrements end
        {
            end--;
        }

        if (a2[start] + a2[end] < target) // increments start
        {
            start++;
        }
    }

    cout<<"No such values are found!";
    return false;
}

bool pairSum(Node *root, unordered_set<int> &s,int sum){
    if(!root){
        return false;
    }
    if(pairSum(root->left,s,sum)){
        return true;
    }
    if(s.find(sum-root->data)!=s.end()){
        return true;
    }else{
        s.insert(root->data);
    }
    if(pairSum(root->left,s,sum)){
        return true;
    }
    return false;
}

int main(){
    return 0;
}