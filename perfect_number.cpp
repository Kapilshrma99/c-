// perfect number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=28;
    int divisor =0;
    for (int i = 1; i <= sqrt(number); i++) 
        if (number % i == 0) 
            if (number / i == i)
                divisor+=i;
            else
                divisor= divisor+i + number / i ;
    (divisor-number==number)?
    cout<<"it is perfect number":
    cout<<"it is not a perfect number";
    return 0;
}