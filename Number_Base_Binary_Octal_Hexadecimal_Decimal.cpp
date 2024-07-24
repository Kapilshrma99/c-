// Number Base (Binary, Octal)
//for octal conversion change 2 with 8.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int deciNumber=234;
    int temp = deciNumber;
    string binNumber;
    while(temp!=0){
        int rem=temp%2;
        binNumber+=to_string(rem);
        temp=temp/2;
    }
    reverse(binNumber.begin(), binNumber.end());
    cout<<binNumber;
    return 0;
}