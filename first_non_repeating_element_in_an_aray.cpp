// first_non_repeating_element_in_an_aray
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<int,int>mp;
    vector<int> arr;
    int n; cin>>n;
    for(int i=0;i<n;i++){
    int in;
    cin>>in;
    arr.push_back(in);
        mp[arr[i]]++;
    }
    for(auto it:mp)
        if(it.second==1){
            cout<<it.first;
            return 0;
        }
    cout<<"no elemment is present";
    return 0;
}