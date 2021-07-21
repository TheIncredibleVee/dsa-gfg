#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

void reverse_vector(vector<int> &a){
    for (int i = 0; i < a.size()/2; ++i) {
        swap(a[i],a[a.size()-i-1]);
    }
}

void reverse_array(vector<int> &a, int start, int end){
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    reverse_vector(a);
    print_vector(a);
    return 0;
}



