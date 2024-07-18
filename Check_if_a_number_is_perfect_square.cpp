// Check if a number is perfect square
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number=25;
    int sqrtNumber=sqrt(number);
    if(sqrtNumber*sqrtNumber==number){
        cout<<"number is perfect square root";
    }else{
        cout<<"number is not perfect square root";
    }
    return 0;
}