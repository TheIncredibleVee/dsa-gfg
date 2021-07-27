#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> freq;

void print_vector(const vector<pair<int, int>> &x){
    for(auto i:x){
        cout<<i.first<<"\t"<<i.second<<endl;
      }
 }

void calc_freq(vector<int> &a){
    int curr=a[0];
    int f=1;
    if(a.size()==1) {
        freq.emplace_back(pair<int, int>(curr, f));
        return;
    }
    for(int i=1;i<a.size();++i){
        if(a[i]!=curr){
            freq.emplace_back(pair<int,int>(curr,f));
            f=1;
            curr=a[i];
        }
        else
            f++;
    }
    freq.emplace_back(pair<int,int>(curr,f));


}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    calc_freq(a);
    print_vector(freq);
}