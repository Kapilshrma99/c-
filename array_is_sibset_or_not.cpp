// array is subset or not
#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool isSubset(vector<int> arr1, vector<int> arr2){
    map<int, int> mp;
    for(int i=0;i<arr1.size();i++){
        mp[arr1[i]]++;
    }
    int count=0;
    for(int i=0;i<arr2.size();i++){
        if(mp[arr2[i]]>0){
            count++;
        }
        else{
            return false;
        }
    }
    if(count=arr2.size()){
        return true;
    }
    return false;
}
int main(){
    vector<int> arr1{1,2,3,4,5,6};
    vector<int> arr2{1,2,9};
    cout<<isSubset(arr1,arr2)<<endl;
    return 0;

}