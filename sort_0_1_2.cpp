// sort array of 0,1,2:
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,low,high,mid;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    mid=low=0;high=n-1;
    while(mid<=high)
        if(arr[mid]==0) swap(arr[low++],arr[mid++]);
        else if(arr[mid]==1) mid++;
        else if(arr[mid]==2) swap(arr[mid],arr[high--]);
    for(auto it:arr)
        cout<<it;
    return 0;
}