#include <bits/stdc++.h>

using namespace std;

void selection_sort(vector<int> &a){
    for(int i=0;i<a.size();++i){
        int pos=i;
        for(int j=i+1;j<a.size();j++){
            if(a[pos]>a[j]){
                pos=j;
            }
        }
        swap(a[pos],a[i]);
    }
    return ;
}

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    selection_sort(a);
    print_vector(a);
    return 0;
}

