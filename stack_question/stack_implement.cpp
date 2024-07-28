//stack implement without stl.
#include <iostream>
using namespace std;
class stack{
    public:
        int top=-1;
        int *arr;
        int size;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(top>size){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=element;
        cout<< element << "element is successfully added"<<endl;
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow";
            return;
        }
    }
    int peek(){
        if(top>-1 && top<size){
            return arr[top];
        }
        else{
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    cout<<st.peek();
    st.pop();
    cout<<st.peek();
    st.isEmpty();
    return 0;
}