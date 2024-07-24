// Harshad number.
#include<iostream>
using namespace std;
int main(){
    int number=18;
    int temp= number,sum=0;
    while(temp!=0){
        sum+=temp%10;
        temp=temp/10;
    }
    ((number%sum)==0)?
    cout<<"it is harshad number":
    cout<<"it is not harshad number";
    return 0;
}