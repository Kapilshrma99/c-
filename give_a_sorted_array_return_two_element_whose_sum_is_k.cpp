// give_a_sorted_array_return_two_element_whose_sum_is_k
#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6},k=15;
    int start=0,end=4;
    while(start<end){
        if((a[start]+a[end])==k){
            cout<<"yes";
            return 0;
        }
        else if(a[start]+a[end]<k){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"no";
    return 0;
}