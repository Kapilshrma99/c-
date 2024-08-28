#include<bits/stdc++.h>
using namespace std;
void leftr(int arr[], int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    leftr(arr,7,3);
    for(auto it:arr){
        cout<<it<<endl;
    }
    return 0;
}