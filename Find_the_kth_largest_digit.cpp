// Find the kth largest digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int place=2;
    int digit=3548;
    string stringDigit=to_string(digit);
    cout<< stringDigit[place-1];
    return 0;
}