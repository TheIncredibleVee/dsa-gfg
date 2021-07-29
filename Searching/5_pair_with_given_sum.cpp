#include <bits/stdc++.h>

using namespace std;


vector<int> pair_sum(vector<int> &a,int start, int end, int sum){
    vector<int> res(2,-1);
    int slow=start;
    int fast=end;
    while(fast>slow){
       if(a[fast]+a[slow]==sum){
           res[0]=slow;
           res[1]=fast;
           break;
       }
       else if(a[fast]+a[slow]>sum){
           fast--;
       }
       else{
           slow++;
       }

    }
    return res;
}

vector<int> triplet_sum(vector<int> &a,int sum){
    for(int i=0;i<a.size();++i){
        vector<int> res= pair_sum(a, i+1, a.size()-1,sum-a[i]);
        if(res[0]!=-1){
            res.push_back(i);
            return res;
        }
    }
    vector<int> ans(3,-1);
    return ans;
}

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    vector<int> ans= pair_sum(a,0,a.size()-1,sum);
    if(ans[0]==-1)
        cout<<"No Pair";
    else
        print_vector(ans);
    vector<int> triple= triplet_sum(a,sum);
    if(triple[0]==-1)
        cout<<"No Triplet";
    else
        print_vector(triple);
    return 0;
}

