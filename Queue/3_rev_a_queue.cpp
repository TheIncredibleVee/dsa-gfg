#include<bits/stdc++.h>

using namespace std;

void rev_queue_rec(queue<int> &q){
    if(q.empty()){
        return;
    }
    int x=q.top();
    q.pop();
    rev(q);
    q.push(x);
}

void rev_queue_iter(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main(){

    return 0;
}