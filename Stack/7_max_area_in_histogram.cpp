#include<bits/stdc++.h>

using namespace std;

long long int maxArea(vector<int> &a){
    long long int res=1;
    int n=a.size();
    stack<int> ng;
    stack<int> pg;
    vector<int> prev;
    vector<int> next;
    pg.push(a[0]);
    prev[0]=a[0];
    next[n-1]=a[0];
    ng.push(a[n-1]);
    for(int i=1;i<n;i++){
        while(!pg.empty()&& pg.top()>=a[i]){
            pg.top();
        }
        int temp=pg.empty()?-1:pg.top();
        prev.push_back(temp);
        while(!ng.empty()&&ng.top()>=a[n-i-1]){
            ng.pop();
        }
        temp=ng.empty()?a.size():ng.top();
        next.push_back(temp);
    }
    long long int curr;
    for (int i=0;i<n;++i) {
        curr=a[i];
        curr+=(i-prev[i]-1)*a[i];
        curr+=(next[i]-i-1)*a[i];
        res=max(res,curr);
    }
    return res;
}

long long int maxArea2(vector<int> &a){
    stack<int> st;
    long long int res;
    st.push(0);
    res=0;
    for(int i=1;i<a.size();++i){
        while(!st.empty() && a[st.top()]>=a[i]){
            long long t = st.top();
            st.pop();
            long long int curr=a[t]*(st.empty()?i:i-st.top()-1);
            res=max(res,curr);
        }
        st.push(i);
    }
    while(!st.empty()){
        long long int t=st.top();
        st.pop();
        long long int curr=a[t]*(st.empty()?a.size():a.size()-1-st.top());
        res=max(res,curr);
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
    maxArea(a);
    return 0;
}

