#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
    }
 }

 bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2||n==3)
        return true;
    for(int i=5;i*i<n;i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
 void print_true_values_of_bool_vector(const vector<bool> &x){
     for(int i=0;i<x.size();i++){
         if(x[i]){
             cout<<i<<"\t";
          }
     }
 }

void assign_true_values_of_bool_vector_to_new_vector(const vector<bool> &source, vector<int> &destination){
    for(int i=0;i<source.size();i++){
        if(source[i]){
            destination.push_back(i);
        }
    }
}

 vector<int> sieve(int n){
    vector<int> res;
    vector<bool> temp(n+1, true);
    temp[0]=false;
    temp[1]=false;
    for (int i=2;i<=n;++i){
        if(isPrime(i)){
            for (int j=i*i;j<=n;j+=i)
                temp[j]=false;
        }
    }
    print_true_values_of_bool_vector(temp);
    cout<<endl;
    assign_true_values_of_bool_vector_to_new_vector(temp,res);
    return res;
}


int main(){
    int n;
    cin>>n;
    print_vector(sieve(n));
    return 0;
}