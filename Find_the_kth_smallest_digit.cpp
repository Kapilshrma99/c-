// Find the kth smallest digit
#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit=35248;
    int place = 3;
    vector<int> v;
    while(digit!=0){
        int temp=digit % 10;
        v.push_back(temp);
        digit=digit/10;
    }
    sort(v.begin(),v.end());
    cout<< v[place-1];
    return 0;
}