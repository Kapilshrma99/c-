//Rotate the digits in a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit=123456;
    int count=1;
    int last_num=digit % 10;
    digit=digit/10;
    int temp=digit;
    while(temp != 0){
        count=count*10;
        temp=temp/10;
    }
    digit=last_num*count+digit;
    cout << digit;
    return 0;
}
