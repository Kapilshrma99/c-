#include<iostream>
using namespace std;
int a;
void k(){
    cout<<a<<endl;
}
int main(){
    int a=0;
    ::a=10;
    cout<<a<<endl;
    k();
    return 0;
}