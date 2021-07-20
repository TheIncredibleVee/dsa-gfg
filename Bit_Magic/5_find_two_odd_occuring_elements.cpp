#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

 vector<int> find_two_odd_occurances(int arr[], int n){
    vector<int> res(2,0);
    int x = 0;
     for (int i = 0; i < n; ++i) x = x ^ arr[i];
     int lb=x &(~(x-1));
     for (int i = 0; i < n; ++i) {
         if((lb & arr[i])== 0)
             res[0]=res[0]^arr[i];
         else
             res[1]=res[1]^arr[i];
     }
     return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    print_vector(find_two_odd_occurances(arr,n));
    return 0;
}

