#include<bits/stdc++.h>

using namespace std;

void print_mat(vector<vector<int>> &mat){
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool is_safe(vector<vector<int>> &board, int row, int col, int val){
    for (int i = 0; i < board.size(); i++)
    {
        if(board[i][col]==val || board[row][i]==val){
            return false;
        }
    }
    
    int square = sqrt(board.size());
    int start_row = row - row % square;
    int start_col = col - col % square;

    for (int i = 0; i < square; i++)
    {
        for (int j = 0; j < square; j++)
        {
            if(board[i+start_row][j+start_col]== val){
                return false;
            }
        }
        
    }
    
    return true;
}


bool solve(vector<vector<int>> &board){
    bool flag=true;
    for(int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[i].size(); j++)
        {
            if(board[i][j]==0){
                flag= false;
                for(int val=1;val<=board.size();++val){
                    if(is_safe(board, i, j, val)){
                        board[i][j]=val;
                        if(solve(board)){
                            return true;
                        }
                        board[i][j]=0;
                    }
                }
            }
        }
        
    }
    return flag;
}

int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>> board(n,vector<int>(n,0));
    // int x;
    // cin>>x;
    // for(int i=0;i<x;i>){
    //     int row, col, value;
    //     cin>>row>>col>>value;
    //     board[row][col]=value;
    // }
    int n=4;
    vector<vector<int>> board(n,vector<int>(n,0));
    board[0][0] = 1;
    board[0][2] = 3;
    board[1][2] = 2;
    board[1][3] = 1;
    board[2][1] = 1;
    board[2][3] = 2;
    board[3][0] = 2;
    board[3][1] = 4;
    cout<<"yes or no\n";
    if(solve(board)){
        cout<<"YES\n";
        print_mat(board); 
    }
    else{
        cout<<"NO\n";
    }
    return 0; 
}