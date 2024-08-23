#include<iostream>
using namespace std;
int main(){
    int a=6,b=4;
     int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            {cout<<i;
            break;}
    }
    return 0;
}