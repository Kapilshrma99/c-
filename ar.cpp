#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int count=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int mini=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mini){
            mini=arr[i];
            count++;
        }
    }
    cout<<count;
    
    return 0;
}