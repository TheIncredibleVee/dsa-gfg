#include<bits/stdc++.h>

using namespace std;

int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return 0;
}

int precS(string &c) {
    if(c == "^")
        return 3;
    else if(c == "/" || c=="*")
        return 2;
    else if(c == "+" || c == "-")
        return 1;
    else
        return 0;
}

void print_stack(stack<char> &s){
    stack<char> temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<"\t";
        temp.pop();
    }
    cout<<endl;
}

string infix_postfix(string &str){
    stack<char> s;
    string res;
    for(int i=0;i<str.length();++i){
        cout<<i<<"\t"<<str[i]<<"\t"<<res<<endl;
        print_stack(s);
        if(str[i]=='('){
            s.push(str[i]);
            continue;
        }
        if(str[i]==')'){
            while(s.top()!='(' && !s.empty()){
                res+=s.top();
                s.pop();
            }
            if(s.top()=='(')
                s.pop();
            continue;
        }
        if(prec(str[i])){
            if(s.empty()){
                s.push(str[i]);
                continue;
            }
            else{
                while(!s.empty()&&prec(str[i])<= prec(s.top())){
                    res+=s.top();
                    s.pop();
                }
                s.push(str[i]);
                continue;
            }

        }
        res+=str[i];
    }
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    return res;
}

long long calc(long long a, long long b, string &c){
    long long res;
    if(c == "^")
        return a^b;
    else if(c == "/")
        return a/b;
    else if(c == "*")
        return a*b;
    else if(c == "+" )
        return a+b;
    else if(c == "-")
        return a-b;
    else
        return 0;
}


long long int eval_postfix(vector<string> &s){
    stack<long long int> st;
    for(int i=0;i<s.size();++i){
        if(precS(s[i])){
            long long int a=st.top();
            st.pop();
            long long int b = st.top();
            st.pop();
            long long curr=calc(b,a,s[i]);
            st.push(curr);
        }
        else{
            long long int num= stoi(s[i]);
            st.push(num);
        }
    }

    return st.top();
}


string infix_prefix(string &str){
    string res;
    stack<char> s;
    for(int i=str.length()-1;i>=0;--i){
        char x= str[i];
        if(x==')'){
            s.push(x);
            continue;
        }
        if(x=='('){
            while(!s.empty()&& s.top()!=')'){
                res+=s.top();
                s.pop();
            }
            if(!s.empty()&& s.top()==')')
                s.pop();
            continue;
        }
        if(prec(x)){
            if(s.empty()){
                s.push(x);
                continue;
            }
            else{
                while(!s.empty()&& prec(x)<=prec(s.top())){
                    res+=s.top();
                    s.pop();
                }
                s.push(x);
                continue;
            }

        }
        res+=x;
    }
    while (!s.empty()){
        res+=s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

long long int eval_prefix(vector<string> &str){
    stack<long long int> s;
    for(int i=str.size()-1;i>=0;--i){
        if(!precS(str[i])){
            long long int num=stoi(str[i]);
            s.push(num);
            continue;
        }
        else{
            long long int a=s.top();
            s.pop();
            long long int b=s.top();
            s.pop();
            s.push(calc(a,b,str[i]));
        }
    }
    return s.top();
}

int main(){
    /*
    string s;
    cin>>s;
    cout<<infix_prefix(s);*/
    ///*
     vector<string> str;
    int n;
    cin>>n;
    while(n--){
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    cout<<eval_prefix(str);
    //*/
     return 0;
}