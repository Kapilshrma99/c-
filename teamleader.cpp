#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a{16,17,4,3,5,2};
    int maxi=INT_MIN;
    for(int i =a.size()-1;i>=0;i--){

        if(maxi<a[i]){
            cout<<a[i];
            maxi=a[i];
        }
    }

}
