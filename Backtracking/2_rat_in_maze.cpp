#include<bits/stdc++.h>

using namespace std;

void printRes(vector<vector<bool>> & res){
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();++j){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool solveMazeRec(vector<vector<bool>> &input,vector<vector<bool>> &sol, int x, int y,int n){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(x<n&&y<n&&input[x][y]==1){
        sol[x][y]=1;
        return solveMazeRec(input,sol, x+1,y,n) || solveMazeRec(input,sol, x,y+1,n);
        sol[x][y]=0;
    }
    return false;
}


void ratInMaze(vector<vector<bool>> &input, int n){
    vector<vector<bool>> sol(n,vector<bool>(n,0));
    if(solveMazeRec(input,sol,0,0,n)){
        cout<<"YES\n";
        printRes(sol);
    }
    else{
        cout<<"NO";
    }
}




int main(){
    int n;
    n=3;
    vector<vector<bool>> maze(n,vector<bool>(n,0));
    maze[0][0]=1;
    maze[1][0]=1;
    maze[0][2]=1;
    maze[1][1]=1;
    maze[2][1]=1;
    maze[2][2]=1;
    ratInMaze(maze, n);
    return 0;
}