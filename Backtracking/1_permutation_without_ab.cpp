#include<bits/stdc++.h>

using namespace std;

void permutate_str(string s, int l ,int r){
    if(l==r){
        cout<<s<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            if(!((l!=0 && s[l-1]=='A' && s[i]=='B') || (r==(l+1) && s[i]=='A'&& s[l]=='B'))){    
                swap(s[i],s[l]);
                permutate_str(s, l+1,r);
                swap(s[l],s[i]);
            }
        }
    }
}

int main(){
    string s;
    cin>>s;
    permutate_str(s,0, s.length()-1);
    return 0;
}