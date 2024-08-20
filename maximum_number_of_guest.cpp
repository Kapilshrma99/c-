#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> e{3,5,2,0};
    vector<int> l{0,2,4,4};
    int t=4;
    int maxi=0,sav=0;
    for(int i=0;i<t;i++){
        sav+=e[i];
        sav-=l[i];
        maxi=max(maxi,sav);

    }
    cout<<maxi;
    return 0; 
}