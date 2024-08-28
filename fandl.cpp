#include<iostream>
using namespace std;
void fandl(int arr[],int n,int x){
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    cout<<"first "<<first<<"second "<<last;
}
int main(){
    int arr[]={2,4,6,8,8,8,11,13};
    fandl(arr,8,8);
    return 0;
}