// Find a number in an AP sequence
#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,6,10,12,14},missingNumber;
    int d=arr[1]-arr[0];
    for(int i = 0;i <end(arr)-begin(arr);i++)
        if(arr[i+1] == arr[i]+d)
            continue;
        else{
            missingNumber = arr[i]+d;
            break;
        }
    cout << missingNumber;
    return 0;
}