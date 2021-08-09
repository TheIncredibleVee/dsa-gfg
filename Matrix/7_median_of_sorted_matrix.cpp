#include<bits/stdc++.h>

using namespace std;

int median(vector<vector<int>> &mat){
    int res;
    int mini=mat[0][0];
    int maxi=mat[0][mat[0].size()-1];
    for(int i=0;i<mat.size();++i){
        mini=min(mini,mat[i][0]);
        maxi=max(maxi,mat[i][mat[0].size()-1]);
    }
    int R=mat.size();
    int C=mat[0].size();
    int mid;
    res=(R*C+1)/2;
    while(mini<maxi){
        int temp=0;
        mid=(maxi+mini)/2;
        for(int i=0;i<R;++i){
            temp+= upper_bound(mat[i].begin(),mat[i].begin()+C,mid)-mat[i].begin();
        }
        if(temp<res){
            mini=mid+1;
        }
        else
            maxi=mid;
    }
    return mini;
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
    cout<<median(mat)<<endl;
    return 0;
}