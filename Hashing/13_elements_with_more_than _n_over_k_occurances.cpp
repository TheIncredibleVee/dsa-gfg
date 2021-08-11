#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

vector<int> cnt_occurances(vector<int> &a, int k){
    vector<int > res;
    unordered_map<int, int> h;
    for(auto x:a){
        h[x]++;
    }
    int cmp=a.size()/k;
    for(auto e:h){
        if(e.second>cmp){
            res.push_back(e.first);
        }
    }
    return res;
}

vector<int> cnt_occurances_for_less_k(vector<int> &a, int k){
    vector<int> res;
    unordered_map<int, int> h;
    for(auto x:a){
        if(h.find(x)!=h.end() || h.size()<k-1){
            h[x]++;
        }
        else{
            for(auto e:h){
                e.second--;
                if(e.second==0){
                    h.erase(e.first);
                }
            }
        }
    }
    int cmp=a.size()/k;
    unordered_map<int,int > h2;
    for(auto x:a){
        if(h.find(x)!=h.end()){
            h2[x]++;
        }
    }
    for(auto e:h2){
        if(e.second>cmp){
            res.push_back(e.first);
        }
    }
    return res;
}


int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    vector<int> ans1 = cnt_occurances(a,k);
    vector<int> ans2 = cnt_occurances_for_less_k(a,k);
    print_vector(ans1);
    print_vector(ans2);
    return 0;
}