#include <bits/stdc++.h>

using namespace std;

double med(vector<int >& a1, vector<int> &a2){
    int res=-1;
    int s1=0;
    int e1=a1.size()-1;
    while(s1<=e1){
        int i1=(s1+e1)/2;
        int i2= ((a1.size()+a2.size()+1))-i1;
        int min1=(i1==a1.size()-1)?INT_MAX:a[i1];
        int max1=(i1==0)?INT_MIN:a[i1-1];
        int min2=(i2==a2.size()-1)?INT_MAX:a[i2];
        int max2=(i2==0)?INT_MIN:a[i2-1];
        if(max1<=min2 && max2<=min1){
            if((n1+n1)%2==0){
                return (double)((max(max1,max2)+min(min1,min2)))/2;
            }
            else
                return (double)(max(max1,max2));
        }
        else if(max1>min2){
            e=i1-1;
        }
        else{
            s=i1+1;
        }
    }
    return res;
}