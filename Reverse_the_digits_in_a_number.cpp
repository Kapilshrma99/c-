// Reverse the digits in a number
#include<iostream>
using namespace std;
int main(){
    int digit=1234567;
    int reverse_digit=0;
    while(digit!=0){
        reverse_digit = 
        (reverse_digit * 10) 
        +
        (digit % 10);
        digit=digit/10;
    }
    cout<<reverse_digit;
}