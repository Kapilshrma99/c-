//Delete middle element from stack
#include<iostream>
#include<stack>
using namespace std;
void delmid(stack<int>&inputStack,int count,int size){
   if(count==size/2){
      inputStack.pop();
      return;
   }
   int num=inputStack.top();
   inputStack.pop();
   delmid(inputStack,count+1,size);
   inputStack.push(num);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    delmid(st,0,st.size());
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}