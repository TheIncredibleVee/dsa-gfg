#include<bits/stdc++.h>

using namespace std;

void printSnake(vector<vector<int>> &mat){
    int R= mat.size();
    int C=mat[0].size();
    for(int i = 0; i < R; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < C; j++)
                cout << mat[i][j] << " ";
        }
        else
        {
            for(int j = C - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
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
    printSnake(mat);
    return 0;
}

