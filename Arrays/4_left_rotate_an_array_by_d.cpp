#include <bits/stdc++.h>

using namespace std;

void reverse_vector(vector<int> &a,int start,int n){
    while(start<n){
        swap(a[start],a[n]);
        start++;
        n--;
    }
}

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

int main(){
    int n,d;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cin>>d;
    reverse_vector(a,0,d-1);
    reverse_vector(a,d,n-1);
    reverse_vector(a,0,n-1);
    print_vector(a);
    return 0;
}

