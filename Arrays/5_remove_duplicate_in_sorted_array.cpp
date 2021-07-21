#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }


 bool check_sorted(vector<int> &a){
     for(int i=1;i<a.size();++i) {
         if (a[i - 1] > a[i]) {
             return false;
         }
     }
     return true;
 }

 void remove_duplicates(vector<int> &a){
    int pos=1;
     for (int i = 1; i < a.size() ; ++i) {
         if(a[i]!=a[pos-1]){
             a[pos]=a[i];
             pos++;
         }
     }
     for(int i=0;i<a.size()-pos+1;++i){
         a.pop_back();
     }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    if(check_sorted(a)) {
        remove_duplicates(a);
        print_vector(a);
    }
    else
        cout<<"Unsorted array, can't do the job!!!";
    return 0;
}

