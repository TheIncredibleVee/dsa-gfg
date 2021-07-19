#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(int i:x){
        cout<<i<<"\t";
      }
 }

 vector<int> divisor(int n){
    vector<int> res;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
            res.push_back(i);
            res.push_back((n/i));
        }
    }

    return res;
}


int main(){
    int n;
    cin>>n;
    print_vector(divisor(n));
    return 0;
}

