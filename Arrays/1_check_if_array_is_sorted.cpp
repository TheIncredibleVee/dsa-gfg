#include <bits/stdc++.h>

using namespace std;

void print_yes_no(bool x){
    if(x)
        cout<<"YES";
    else
        cout<<"NO";
}

bool check_sorted(vector<int> &a){
    for(int i=1;i<a.size();++i) {
        if (a[i - 1] > a[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    print_yes_no(check_sorted(a));
    return 0;
}

