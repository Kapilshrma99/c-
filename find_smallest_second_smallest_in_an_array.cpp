// find_smallest_second_smallest_in_an_array
#include<iostream>
#include<vector>
using namespace std;
vector<int> minand2min(vector <int> arr){
    int min1=arr[0],min2=arr[0];
    for(int i=0;i<arr.size();i++){
        min1=min(arr[i],min1);      
    }
    min2=INT16_MAX;
    for(int i=0;i<arr.size();i++){
        if(min2>min1 && min1!=arr[i]){
            min2=min(arr[i],min2);
        }          
    }
    return {min1,min2};

}
int main(){
    vector<int> arr{2,4,3,5,6};
    vector<int> arr1(2);
    arr1=minand2min(arr);
    cout<<arr1[0]<<" "<<arr1[1];
    return 0;
}