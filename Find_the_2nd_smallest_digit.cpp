// Find the 2nd smallest digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit=35248;
    vector<int> v;
    while(digit!=0){
        int temp=digit % 10;
        v.push_back(temp);
        digit=digit/10;
    }
    sort(v.begin(),v.end());
    cout<< v[1];
    return 0;
}