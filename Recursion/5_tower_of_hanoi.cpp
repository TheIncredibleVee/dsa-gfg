#include <bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n,char source,char destination, char auxi){

    if(n==1)
        cout<<endl<<"Put 1st from "<<source<<" to "<<destination;
    else {
        tower_of_hanoi(n - 1, source, auxi, destination);
        cout << endl << "Put " << n << "th from " << source << " to " << destination;
        tower_of_hanoi(n - 1, auxi, destination, source);
    }
}

int main(){
    int n;
    cin>>n;
    char a,b,c;
    cin>>a>>b>>c;
    tower_of_hanoi(n,a,b,c);
    return 0;
}

