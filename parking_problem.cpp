#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n;cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max_count=0,index;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            index=i+1;
        }
    }
cout<<index;
    return 0;
}