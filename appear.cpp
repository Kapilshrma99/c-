#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    int arr[]={1,2,3,2,1};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        mp[arr[i]]++;
    }
    int digit=0;
    for(auto it:mp){
        if(it.second==1){
            digit=it.first;
        }
    }
cout<<digit;
    
    return 0;




}