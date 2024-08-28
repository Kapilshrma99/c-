#include<iostream>
using namespace std;
bool isSort(int arr[]){
    bool sort=true;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort=false;
            break;
        }
    }
    return sort;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<isSort(arr);
    return 0;
}