#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

void  move_zeros(vector<int> &a){
    int pos=0;
    bool flag=false;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]==0){
            flag=true;
            continue;
        }
        if(flag){
            swap(a[i],a[pos]);
            flag=false;
        }
        pos++;
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    move_zeros(a);
    print_vector(a);
    return 0;
}

