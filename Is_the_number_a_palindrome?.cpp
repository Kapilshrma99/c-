// Is the number a palindrome?
#include<iostream>
using namespace std;
int main(){
    int originalNumber = 121;
    int pallindromeNumber = 0;
    int check = originalNumber;
    while(originalNumber != 0){
        int temp = originalNumber % 10;
        pallindromeNumber=
        pallindromeNumber * 10 + temp;
        originalNumber = originalNumber/10;
    }
    (pallindromeNumber == check)?
    cout<<"It is pallindrome":
    cout<<"It is not pallindrome";
    return 0;
}