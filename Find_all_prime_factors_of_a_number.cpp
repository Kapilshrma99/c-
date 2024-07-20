// Find all prime factors of a number
#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num==1){
        return true;
    }
    for(int i =2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int number = 8;
    for(int i=1;i<=number;i++){
        if(number%i==0 && isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}