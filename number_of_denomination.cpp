#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int n=25;
    string binary = bitset<8>(n).to_string();
    cout<<binary;
    return 0;
}