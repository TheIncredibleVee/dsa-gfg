#include<bits/stdc++.h>

using namespace std;
void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> prevGtr(vector<int> &a){
    vector<int> res;
    stack<int> st;
    res.push_back(a[0]);
    st.push(a[0]);
     for (int i = 1; i < a.size(); ++i) {
         while(!st.empty()&& st.top()<=a[i]){
             st.pop();
         }
         int greater=st.empty()?-1:st.top();
         res.push_back(greater);
     }
     return res;
}

vector<int> nextGtr(vector<int> &a){
    vector<int> res;
    stack<int> st;
    res.push_back(a[a.size()-1]);
    st.push(a[a.size()-1]);
    for (int i = a.size()-2; i >=0; --i) {
        while(!st.empty()&& st.top()<=a[i]){
            st.pop();
        }
        int greater=st.empty()?-1:st.top();
        res.push_back(greater);
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
    print_vector(prevGtr(a));
    return 0;
}