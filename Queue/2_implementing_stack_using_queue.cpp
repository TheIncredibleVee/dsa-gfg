#include<bits/stdc++.h>

using namespace std;

struct Stack{
    int size;
    queue<int> q1,q2;
    void push(x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        q1.pop();
    }
    int peek(){
        q1.front();
    }
    bool isempty(){
        return q1.empty();
    }
    int cap(){
        return q1.size();
    }
};


int main(){

    return 0;
}

