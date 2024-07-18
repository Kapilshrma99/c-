// Find a number in fibonacci sequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    vector <int> fiboSeq=
    {0,1,1,2,3,5,8,13};
    int number = 3;
    for(auto it:fiboSeq)
        if(it == number)
            break;
        else count++;
    cout << number <<" at "<<count+1;
    return 0;
}