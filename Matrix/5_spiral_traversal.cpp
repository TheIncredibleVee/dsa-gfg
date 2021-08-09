#include<bits/stdc++.h>

using namespace std;

void spiral(vector<vector<int>> &mat){
    int T=0;
    int B=mat.size()-1;
    int R=mat[0].size()-1;
    int L=0;
    while(B>=T && R>=L){
        for(int i=L;i<=R;++i){
            cout<<mat[T][i]<<"\t";
        }
        T++;
        for(int i=T;i<=B;i++){
            cout<<mat[i][R]<<"\t";
        }
        R--;
        if(R>=L) {
            for (int i = R; i >= L; i--) {
                cout << mat[B][i] << "\t";
            }
            B--;
        }
        if(B>=T){
            for (int i = B; i >= T; --i) {
                cout << mat[i][L] << "\t";
            }
            L++;
        }
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
    spiral(mat);
    return 0;
}
