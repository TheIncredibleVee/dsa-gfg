#include<bits/stdc++.h>

using namespace std;

void transpose(vector<vector<int>>&mat){
    for(int i=0;i<mat.size();++i){
        for(int j=i+1;j<mat[0].size();++j){
            swap(mat[i][j],mat[j][i]);
        }
    }
}

void rotate(vector<vector<int>>& mat){
    transpose(mat);
    for(int i=0;i<mat.size();++i){
        int low=0;
        int high= mat[0].size()-1;
        while(high>low){
            swap(mat[high][i],mat[low][i]);
            high--;
            low++;
        }
    }
}

void print_matrix(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();++i){
        for(int j=0;j<mat[0].size();++j){
            cout<<mat[i][j]<<"\t";
         }
         cout<<endl;
     }
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
    rotate(mat);
    print_matrix(mat);
    return 0;
}

