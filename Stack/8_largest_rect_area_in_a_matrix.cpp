#include<bits/stdc++.h>

using namespace std;

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

long long int maxarea(vector<vector<int>> &mat){
    int R=mat.size();
    int C=mat[0].size();
    long long int res=0, curr;
    for(int i=0;i<R;++i){
        if(i!=0){
            for(int j=0;j<C;++j){
                if(mat[i][j]!=0){
                    mat[i][j]+=mat[i-1][j];
                }
            }
        }
        curr=maxArea2(mat[i]);
        res=max(curr,res);
    }
    return res;
}


int main(){
    int R, C;
    cin>>R>>C;
    vector<vector<int>> mat(R, vector<int>(C));
    for(int i=0;i<R;++i){
        for(int j=0;j<C;++j){
            cin>>mat[i][j];
         }
     }
    return 0;
}