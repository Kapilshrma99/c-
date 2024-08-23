#include<iostream>
#include<vector>
using namespace std;
bool magical(vector<int> arr){
    int index=-1;
    for(int i=0;i<arr.size();i++){
        if(i*i==arr[i]){
            index=i;
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"enter element of array";
        cin>>arr[i];
    }
    cout<<magical(arr);
    return 0;
}