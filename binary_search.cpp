// binary search.cpp
#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> arr,int k ){
    int loc=-1;
    int start=0,end=arr.size()-1,mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==k){
            loc=mid+1;
            break;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return loc;
}
int main(){
    vector<int> arr{1,2,3,4,5};
    int k=4;
    cout<<binary_search(arr,k);
    return 0;
}