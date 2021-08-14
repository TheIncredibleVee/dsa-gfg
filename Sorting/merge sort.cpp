#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
    }
    cout<<endl;
}

void merge(vector<int> &a, int low ,int mid, int high){
    cout<<"Merging the two sorted sub-arrays from "<<low<<" to "<<high<<" with "<<mid<<" as middle elem"<<endl;
    int n =mid-low+1;
    int m=high-mid;
    int left[n];
    int right[m];
    for(int i=0;i<n;++i){
        left[i]=a[i+low];
    }
    for(int j=0;j<m;++j){
        right[j]=a[mid+j+1];
    }
    int i=0;
    int j=0;
    int index=low;
    while(i<n&&j<m){
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
    cout<<"After sorting\n";
    print_vector(a);
}


void mergeSort(vector<int> &a, int l, int r ){
    if(r>l){
        int mid= l+(r-l)/2;
        cout<<"Calling recursive sort function for "<<l<<" to "<<mid<<" as left half and "<<mid+1<<" to "<<r<<" as right half\n";
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
    mergeSort(a,0,n-1);
    cout<<"\nThe final array after comes out to be\n";
    print_vector(a);
    return 0;
}