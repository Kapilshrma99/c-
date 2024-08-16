// linear_search.
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr ,int k){
    int re=-1,count=0;
    for(auto it:arr){
        if(it==k){
            re=count+1;
            break;
        }
        count++;
    }
    return re;
}
int main(){
    vector<int> arr{9,7,2,16,4};
    int k=4;
    cout<<search(arr,k)<<endl;
    return 0;
}