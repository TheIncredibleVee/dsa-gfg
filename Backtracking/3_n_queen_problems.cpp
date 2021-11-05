#include<bits/stdc++.h>

using namespace std;

void print_mat(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int row ,int col, vector<vector<int>> &board, int n){
    for(int i=0;i<n;++i){
        if(board[row][i]==1){
            return false;
        }
    }
    for (int i=row, j= col; i<n && j>=0;i++,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=row, j=col ;i>=0 && j>=0;--i,--j){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}

bool n_queen(int n, vector<vector<int>> &board, int col){
    if(n==col){
        return true;
    }
    for(int i=0;i<n;++i){
        if(isSafe(i, col, board,n)){
            board[i][col] = 1;
            if(n_queen(n, board, col+1)){
                return true;
            }
            board[i][col] = 0;
        }
    }
    return false;
    
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int>(n,0));
    if(n_queen(n, board,0)){
        cout<<"YES\n";
        print_mat(board);
    }
    else{
        cout<<"NO";
    }
    return 0; 
}