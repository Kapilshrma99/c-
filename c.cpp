// Find_sum_of_'n'_numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    int sum=0,a;
    cout<<"enter the count numbers";
    cin>>n;
    cout<<"Enter the numbers for summing them";
    vector<int> numbers;
    for(int i=0;i<n;i++){
        cin>>a;
        numbers.push_back(a);
        sum=sum+numbers[i];
    }
    cout<<"sum is :"<<sum;
    return 0;
}