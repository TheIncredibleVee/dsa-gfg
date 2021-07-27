#include <bits/stdc++.h>

using namespace std;

void min_flips(vector<int> &a){
    for(int i=1;i<a.size();++i){
        if(a[i]!=a[i-1]){
            if(a[i]!=a[0]){
                cout<<"From "<<i<<" to";
            }
            else{
                cout<<" "<<i-1<<endl;
            }
        }
    }
    if(a[a.size()-1]!=a[0]){
        cout<<a.size()<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    min_flips(a);
    return 0;
}
