#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi=INT_MIN;
    vector<int> ans;
    vector<int> v{10,22,12,3,0,6};
    for(int i =v.size()-1;i>0;i--){
        if(maxi<v[i]){
            ans.push_back(v[i]);
        }
        maxi=max(maxi,v[i]);
    }
    for(auto it:ans){
        cout<<it;
    }
    return 0;
}