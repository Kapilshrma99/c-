#include<iostream>
using namespace std;
int main(){
    string s="###***##******";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(char(s[i])=='#'){
            count--;
        }
        else if(char(s[i])=='*'){
            count++;
        }
    }
    cout<<count;
}