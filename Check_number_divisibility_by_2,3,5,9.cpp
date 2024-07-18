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
    cout<<"it is "<<(diviOf2and5 % 2==0)<<" by 2"<<endl;
    cout<<"it is "<<(sum % 3==0)<<" by 3"<<endl;
    cout<<"it is "<<(diviOf2and5 % 5==0)<<" by 5"<<endl;
    cout<<"it is "<<(sum % 9==0)<<" by 9"<<endl;

    return 0;
}