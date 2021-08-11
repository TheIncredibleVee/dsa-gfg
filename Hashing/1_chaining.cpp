#include<bits/stdc++.h>

using namespace std;

struct hashtable{
    int size;
    vector<list<int>> hash;
    hashtable(int x){
        size=x;
        hash = vector<list<int>>(x);
    }
    void insert(int key){
        int i=key%size;
        hash[i].push_back(key);
    }
    void remove(int key){
        int i= key%size;
        hash[i].remove(key);
    }
    bool search(int key){
        int i=key%size;
        for(auto x:hash[i]){
            if(x==key){
                return true;
            }
        }
        return false;
    }
};


int main(){
    hashtable h(10);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    if(h.search(3)==true)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
    h.remove(2);

    if(h.search(2)==true)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}