#include<bits/stdc++.h>

using namespace std;

pair<int, int> search(vector<vector<int>> &mat, int key){
    pair<int, int> ans;
    ans.first=-1;
    ans.second=-1;
    if(key<mat[0][0] || key>mat[mat.size()-1][mat[0].size()-1])
        return ans;
    int i=0,j=mat[0].size()-1;
    while(i<mat.size() && j>=0){
        if(mat[i][j]==key){
            ans.first=i;
            ans.second=j;
            return ans;
        }
        else if(mat[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
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
    long long x;
    cin>>x;
    pair<int, int> res;
    res=search(mat,x);
    if(res.first!=-1) {
        cout << res.first << "\t" << res.second;
    }
    else
        cout<<"Not found";
    return 0;
}