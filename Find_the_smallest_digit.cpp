// Find the smallest digit
#include<iostream>
using namespace std;
int main(){
    int mini=INT32_MAX;
    int digit=921298;
    while(digit!=0){
        int temp=digit%10;
        mini=min(temp,mini);
        digit = digit / 10;
    }
    cout<<mini;
    return 0;
}