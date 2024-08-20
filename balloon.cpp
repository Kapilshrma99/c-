#include<iostream>
#include<vector>
#include<map>
using namespace std;
class a{
    public:
    void fun(vector<int> b){
        map <char,int> mp;
        for(int i=0;i<b.size();i++){
            mp[b[i]]++;
        
        }
        for(auto it:mp){
            cout<<it.first<<" "<<it.second <<endl;
                      }
        
        for(auto it:mp){
            if(it.second%2!=0){
                cout<< it.first <<" is odd"; 
                return;           }
        }
        cout<<"all are even";
    }

};
int main(){
    a obj;
    vector<int> b{'a','b','b','b','c','c','c','a','f','c'};
    obj.fun(b);
    return 0;
}