// Running_sum_of_1d_array.
#include<iostream>
#include<vector>
using namespace std;
class sol{
    public:
       void runningSum(vector<int> &arr){
            for(int i=1;i<arr.size();i++){
                arr[i]=arr[i-1]+arr[i];
            }
        }
};
int main(){
    sol obj;
    vector<int> arr{1,2,3,4};
    obj.runningSum(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}