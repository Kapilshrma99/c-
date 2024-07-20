// Check if a number is circular prime or not
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main(){
    int number=791;
    int countInNumber=2;
    while(isPrime(number)){
        int temp=number%10;
        int div = number / 10;
        int num=pow(10,countInNumber-1)*div+temp;
        if (number == num){
            cout << "Yes" << endl;
            return true;
            }
    }
    cout << "No" << endl;
    return 0;
}