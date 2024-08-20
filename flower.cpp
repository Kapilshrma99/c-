#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a{1,0,0,0,1};
    int c0=0,c1=0,n=2;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            c0++;
        }
        else{
            c1++;
        }
    }
if(abs(c1-c0)>=n)
{
    cout<<"true";
}
else{
    cout<<"false";
}


    return 0;
}