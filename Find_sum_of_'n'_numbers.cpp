#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,sum=0;
    cout<<"enter the count numbers";
    cin>>n;
    cout<<"Enter the numbers for summing them";
    vector<int> numbers;
    for(int i=0;i<n;i++){
        cin>>numbers[i];
        sum=sum+numbers[i];
    }
    cout<<"sum is :"<<sum;
    return 0;
}