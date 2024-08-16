// remove_duplicate_element_from_sorted_array.
#include<iostream>
#include<vector>
using namespace std;
int remove_duplicates(vector<int> &arr){
    vector<int> arr1;
    int j=0;
    arr1.push_back(arr[0]);
    for(int i=0;i<arr.size()-1;i++){
        if(arr1[j]!=arr[i]){
            arr1.push_back(arr[i]);
            j++;
        }
    }
    j=0;
    for(int i=0;i<arr1.size();i++){
        arr[i]=arr1[i];
        j++;
    }
    return j;
}
int main(){
    vector<int> arr{2,2,2};
    int j=remove_duplicates(arr);
    for(int i=0;i<j;i++){
        cout<<arr[i];
    }
    return 0;
}