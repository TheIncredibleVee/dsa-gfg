#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> &a, int key){
    int low=0;
    int high=a.size()-1;
    int mid=(high+low)/2;
    while(low<=high){
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int binary_serach_rec(vector<int> &a,int high,int low,int key){
    int mid=(low+high)/2;
    if(low>=high)
        return -1;
    if(key==a[mid]){
        return mid;
    }
    else if(key>a[mid]){
        return binary_serach_rec(a,high,mid+1,key);
    }
    else
        return binary_serach_rec(a,mid-1,low,key);
}

int first_occurance(vector<int>&a,int high,int low, int key){
    if(high<low)
        return -1;
    int mid=(low+high)/2;
    if(key>a[mid]){
        return first_occurance(a,high,mid+1,key);
    }
    else if(key<a[mid])
        return first_occurance(a,mid-1,low,key);
    else{
        if(mid == 0 || a[mid]!=a[mid-1])
            return mid;
        else
            return first_occurance(a,mid-1,low,key);
    }
}

int last_occurance(vector<int>&a,int high,int low, int key){
    if(high<low)
        return -1;
    int mid=(low+high)/2;
    if(key>a[mid]){
        return last_occurance(a,high,mid+1,key);
    }
    else if(key<a[mid]){
        return last_occurance(a,mid-1,low,key);

    }
    else{
        if(mid == a.size()-1 || a[mid]!=a[mid+1]){
            return mid;
        }
        else{
            return last_occurance(a,high,mid+1,key);
        }
    }
}

int no_of_occurances(vector<int> &a, int low,int high, int key){
    int first= first_occurance(a,high,low,key);
    if(first!=-1){
        return last_occurance(a,high,low,key)-first+1;
    }
    else
        return 0;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<first_occurance(a,a.size()-1,0,x)<<endl<<last_occurance(a,a.size()-1,0,x)<<endl<<no_of_occurances(a,0,a.size()-1,x)<<endl;
    return 0;
}