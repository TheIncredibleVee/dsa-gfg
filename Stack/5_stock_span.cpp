#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 vector<int> stock_span(vector<int> &a){
    vector<int> res;
    res.push_back(1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<a.size();++i){
        while(!st.empty() &&a[st.top()]<=a[i]){
            st.pop();
        }
        int span=st.empty()?i+1:i-st.top();
        res.push_back(span);
        st.push(i);
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
    print_vector(stock_span(a));
    return 0;
}

