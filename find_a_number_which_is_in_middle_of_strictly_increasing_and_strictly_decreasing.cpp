// find_a_number_which_is_in_middle_of_strictly_increasing_and_strictly_decreasing
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> fre;
    int n; cin>>n;
    int arr[n];
    int mx=INT32_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        fre[arr[i]]++;
        mx=max(arr[i],mx);
    }
    for(auto it:fre){
        if((it.second==mx && it.first>1) ||it.second>2){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}