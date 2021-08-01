#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

 void bubble_sort(vector<int> &a){
    bool swapped=false;
    for(int i=0;i<a.size()-1;++i){
        swapped=false;
        for(int j=1;j<a.size()-1-i;++j){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(!swapped ){
            return;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    bubble_sort(a);
    print_vector(a);
    return 0;
}

