// Find the largest digit
#include<iostream>
using namespace std;
int main(){
    int maxi=INT32_MIN;
    int digit=928298;
    while(digit!=0){
        int temp=digit%10;
        maxi=max(temp,maxi);
        digit = digit / 10;
    }
    cout<<maxi;
    return 0;
}