#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<vector<int>> v(n,vector<int> (t+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<=t;j++){
            int temp;
            cin>>temp;
            v[i][j]=temp;
        }
        int temp1=v[i][t];
        int sum=0;
        for(int j=0;j<t;j++){
            sum+=v[i][j]*temp1;
            v[i][j]=sum;
        }
    }
    int maxi=0;
    vector<int> maxv;
    for(int i=1;i<t;i+=2){
        int loc=0;
        for(int j=0;j<n;j++){
            if(maxi<v[j][i]){
                maxi=v[j][i];
                loc=j+1;
            }
        }
            maxv.push_back(loc);
    }
    map<int,int> mp;

    for(auto it:maxv){
        mp[it]++;
    }
    for(auto it:mp){
        
    }
    return 0;
}