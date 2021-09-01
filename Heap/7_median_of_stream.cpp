#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<double> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<double> median(vector<int> &a){
    vector<double> res;
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> g;
    s.push(a[0]);
    res.push_back(s.top());
    for(int i=1;i<a.size();++i){
        if(i%2) {
            if(a[i]>s.top()){
                g.push(a[i]);
            }
            else{
                g.push(s.top());
                s.pop();
                s.push(a[i]);
            }
            res.push_back((s.top()+g.top())/2.0);
        }
        else{

            if(a[i]<=g.top()){
                s.push(a[i]);
            }
            else{
                s.push(g.top());
                g.pop();
                g.push(a[i]);
            }
            res.push_back((double)s.top());
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<double> ans=median(a);
    print_vector(ans);
    return 0;
}