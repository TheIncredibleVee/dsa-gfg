#include<bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> &x){
    for(auto i:x){
        cout<<i<<"\t";
      }
      cout<<endl;
 }

 int naive_partition(vector<int> &a, int low,int high,int pivot){
    cout<<"Partitioning from "<<low<<" to "<<high<<endl;
    int temp[high-low+1];
    int index=0;
    int pos=0;
    for(int i=low;i<=high;++i){
        if(a[i]<=a[pivot] && i!=pivot){
            temp[index++]=a[i];
        }
    }
    pos=index+low;
    temp[index++]=a[pivot];
     for(int i=low;i<=high;++i){
         if(a[i]>a[pivot]){
             temp[index++]=a[i];
         }
     }
     for(int i=low;i<=high;++i){
         a[i]=temp[i-low];
     }
     cout<<"After partitioning, the array turns out to be\n";
     print_vector(a);
     return pos;
}

int lpartition(vector<int> &a, int low,int high){

    cout<<"Partitioning from "<<low<<" to "<<high<<endl;
    int j=low-1;
    int pivot=a[high];
    for(int i=low;i<=high-1;++i){
        if(a[i]<pivot){
            j++;
            cout<<"Swapping "<<i<<" th index with "<<j<<" th index\n";
            swap(a[i],a[j]);
            print_vector(a);
        }
    }
    cout<<"Finally placing "<<high<<" to "<<j+1<<endl;
    swap(a[high],a[++j]);
    print_vector(a);
    return j;
}

int hoare(vector<int>&a, int low,int high) {

    cout<<"Partitionating from "<<low<<" to "<<high<<endl;
    int i = low - 1;
    int pivot = a[low];
    int j = high + 1;
    while (true){
        do {
            i++;
        } while (a[i] < pivot);
        do {
            j--;
        }while(a[j] > pivot);
        if(i>=j) return j;
        cout<<"Swapping "<<i<<" th with "<<j<<" th index\n";
        swap(a[i],a[j]);
        print_vector(a);
    }
}

void quick_sort(vector<int> &a,int low,int high){
    if(high>low){
        int pivot = hoare(a,low,high);            //For Hoare's partition call the fn hoare and for naive_partition with parameter of pivot as high
        cout<<"\nPivot element returned : "<<pivot<<endl;
        cout<<"\nCalling quicksort from  "<<low<<" to "<<pivot<<endl;
        quick_sort(a,low,pivot);              //For Hoare's partition call fn with high as pivot
        cout<<"\nCalling quicksort from  "<<pivot+1<<" to "<<high<<endl;
        quick_sort(a,pivot+1,high);
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    cout<<"\nThe final array after comes out to be\n";
    print_vector(a);
    return 0;
}

