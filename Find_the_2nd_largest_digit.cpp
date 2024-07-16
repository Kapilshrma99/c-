// Find the 2nd largest digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit=3548;
    vector<int> v;
    while(digit!=0){
        int temp=digit % 10;
        v.push_back(temp);
        digit=digit/10;
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<< v[1];
    return 0;
}