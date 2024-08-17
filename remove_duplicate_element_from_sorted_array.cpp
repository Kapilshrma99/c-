// remove_duplicate_element_from_sorted_array.
#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int start=0,curr=1;
        while(curr<=nums.size()-1){
            if(nums[start]!=nums[curr])
                nums[++start]=nums[curr];
            curr++;
        }
        return ++start;
    }
int main(){
    vector<int> arr{2,2,2};
    int j=removeDuplicates(arr);
    for(int i=0;i<j;i++){
        cout<<arr[i];
    }
    return 0;
}