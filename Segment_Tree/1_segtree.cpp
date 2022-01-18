#include<bits/stdc++.h>

using namespace std;

int constsegTree(vector<int> &segTree, vector<int> &arr, int start, int end, int index){
    if(start==end){
        segTree[index]=arr[start];
        return arr[start];
    }
    int mid= (start+end)/2;
    segTree[index]=constsegTree(segTree,arr,start,mid,2*index+1)+constsegTree(segTree,arr,mid+1,end,2*index+2);
    return segTree[index];
}

int getSum(vector<int> &segTree, int qstart , int qend, int tstart, int tend, int index ){
    if(qstart>tend || qend<tstart){
        return 0;
    }
    if(qstart<=tstart && qend>=tend){
        return segTree[index];
    }
    int mid=(tstart+tend)/2;
    return getSum(segTree,qstart,qend,tstart,mid,2*index+1)+getSum(segTree,qstart,qend,mid+1,tend,2*index+2);
    
}

void update(vector<int> &segTree,int start, int end, int index, int diff){
    if(index>end || index<start){
        return;
    }
    segTree[index]+=diff;
    if(start<end){
        int mid= (start+end)/2;
        update(segTree,start,mid,2*index+1,diff);
        update(segTree,mid+1,end,2*index+2,diff);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    vector<int> segTree(4n,0);
    constsegTree(segTree,a,0,n-1,0);
    return 0;
}