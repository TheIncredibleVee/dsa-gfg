#include <bits/stdc++.h>

using namespace std;

vector<int> prime_factors(int n){
    vector<int> res;
    bool flag=0;
    if(n==1) {
        res.push_back(1);
        return res;
    }

    while(n%2==0) {
        res.push_back(2);
        n/=2;
    }

    while(n%3==0) {
        res.push_back(3);
        n/=3;
    }
    for(int i=5;i<= sqrt(n);i+=6){
        while(n%i==0){
            res.push_back(i);
            n=n/i;
        }
        while(n%(i+2)==0){
            res.push_back(i+2);
            n=n/(i+2);
        }
    }
    if(n>3)
        res.push_back(n);
    return res;
}

void print_vector(const vector<int>& x){
    for(int i : x){
        cout<<i<<"\t";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    print_vector(prime_factors(n));
    return 0;
}

