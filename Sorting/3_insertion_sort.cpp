#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
    cout<<endl;
 }

 void insertion_sort(vector<int> &a){
    for(int i=1;i<a.size();++i){
        for(int j=0;j<i;++j){
            if(a[i]<a[j]){
                int temp = a[i];
                int k=i;
                while (k>j){
                    a[k]=a[k-1];
                    k--;
                }
                a[j]=temp;
                break;
            }
        }
        //print_vector(a);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    insertion_sort(a);
    print_vector(a);
    return 0;
}
