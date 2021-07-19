#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=0;
    int dig=floor(log10(n)+1);
    while(true){
        if(dig<=1)
            break;
        int first= n%10;
        int last=floor(n/pow(10, dig-1));
        //cout<<first<<"\t"<<last<<"\t"<<n<<endl;
        dig-=2;
        if(last!=first){
            flag=1;
            break;
        }
        n=n % int(pow(10,dig+1));
        n/=10;
    }
    if(flag){
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}