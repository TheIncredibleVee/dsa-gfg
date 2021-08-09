#include <bits/stdc++.h>

using namespace std;

vector<int> mergeTwo(vector<int> &a, vector<int> &b){
    vector<int> res;
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res.push_back(a[i]);
            i++;
        }
        else{
            res.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        res.push_back(a[i]);
        i++;
    }
    while(j<m){
        res.push_back(a[j]);
        j++;
    }
    return res;
}

void merge(vector<int> &a, int low ,int mid, int high){
    int n =mid-low+1;
    int m=high-mid;
    vector<int> left(n);
    vector<int> right(n);
    for(int i=0;i<n;++i){
        left[i]=a[i];
    }
    for(int j=0;j<m;++j){
        right[j]=a[mid+j+1];
    }
    int i=0;
    int j=0;
    int index=0;
    while(i<m&&j<m){
        if(left[i]<=right[j]){
            a[index]=left[i];
            i++;
            index++;
        }
        else{
            a[index]=right[j];
            j++;
            index++;
        }
    }
    while(i<n){
        a[index]=left[i];
        i++;
        index++;
    }

    while(j<m){
        a[index]=right[j];
        j++;
        index++;
    }

}
void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
 }

void mergeSort(vector<int> &a, int l, int r ){
    if(r>l){
        int mid= l+(r-l)/2;
        mergeSort(a,l, mid);
        mergeSort(a,mid+1,r);
        merge(a, l ,mid ,r);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m,0);
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    mergeTwo(a,b);
    print_vector(a);
    return 0;
}