// reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string st="kapil";
    for(int i=0;i<st.length();i++){
        s.push(st[i]);
    }
    st="";
    while(!s.empty()){
            st.push_back(s.top());
            s.pop();
    }
    cout<<st;
    return 0;
}