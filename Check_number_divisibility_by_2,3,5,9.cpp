// Check number divisibility by 2, 3, 5, 9
#include <iostream>
using namespace std;
int main(){
    int number = 243,sum=0;
    int diviOf2and5 = 243 % 10;
    while(number != 0){
        sum+=number%10;
        number=number/10;
    }
    (diviOf2and5 % 2==0) && 
    cout<<"it is divisible by 2"<<endl;
    (sum % 3==0) &&
    cout<<"it is by divisible 3"<<endl;
    (diviOf2and5 % 5==0) &&
    cout<<"it is divisible by 5"<<endl;
    (sum % 9==0) &&
    cout<<"it is divisible by 9"<<endl;
    return 0;
}