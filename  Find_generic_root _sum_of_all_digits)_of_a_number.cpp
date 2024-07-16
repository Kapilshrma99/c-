//  Find generic root (sum of all digits) of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int digit=12345;
    while(digit!=0){
        int temp=digit % 10;
        sum=sum+temp;
        digit=digit / 10;
    }
    cout<<"sum of digit is:"<<sum;
    return 0;
}