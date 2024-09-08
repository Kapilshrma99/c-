#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int> newArr;
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int sum=arr[0]+arr[1];
        arr.push_back(sum);
        newArr.push_back(sum);
        arr.erase(arr.begin());
        arr.erase(arr.begin());
        sort(arr.begin(),arr.end());
    }
    for(auto i :newArr){
        cout<<i<<endl;
    }
    cout<<arr[1];
    return 0;
}