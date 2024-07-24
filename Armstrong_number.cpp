// #Armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int temp,number=temp=153,count=0;
    int armStrong=0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=number;
    while(temp!=0){
        int rem=temp%10;
        armStrong+=pow(rem,count);
        temp=temp/10;
    }
    (armStrong==number)?
    cout<<"it is armstrong":
    cout<<"it is not armstrong";
    return 0;
}