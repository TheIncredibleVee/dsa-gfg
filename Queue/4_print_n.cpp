#include<bits/stdc++.h>

using namespace std;

void print_nums(int n){
    queue<string> q;
    q.push("5");
    q.push("6");
    while(n--){
        string s=q.front();
        cout<<s<<"\t";
        string y=s;
        q.push(s.append("5"));
        q.push(y.append("6"));
        q.pop();
    }
}

int main(){
    int n;
    cin>>n;
    print_nums(n);
    return 0;
}