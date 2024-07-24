//strong number.
#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0 || num==1) 
    return 1;
    return num*factorial(num-1);
}
int main(){
    int number=145,fact=0,tnum=number;
    while(number!=0){
        int temp=factorial(number%10);
        fact=fact+temp;
        number=number/10;
    }
    (fact==tnum)? 
    cout<<"it is strong number":
    cout<<"it is not strong number";
    return 0;
}