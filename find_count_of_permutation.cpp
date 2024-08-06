// find count of permutation in a string.
#include<iostream>
#include<map>
using namespace std;
int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*fact(num-1);
}
int main(){
    string find= "hello";
    map<char,int> freq;
    for(int i=0;i<find.size();i++){
        freq[find[i]]++;
    }
    int ans=fact(find.size());
    for(auto it:freq){
        ans=ans/fact(it.second);
    }
    cout<<ans;
    // for(auto it:freq){
    //     cout<<it.second;
    // }
    return 0;
}