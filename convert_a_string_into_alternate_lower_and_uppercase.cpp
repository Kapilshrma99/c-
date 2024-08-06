// convert_a_string_into_alternate_lower_and_uppercase
#include<iostream>
using namespace std;
int main(){
    int count=1;
    string s="KapilSharma";
    for(auto& it:s){
        if(count%2==0)
            it=toupper(it);
        else
            it=tolower(it);
        count++;
    }
    cout<<s;
    return 0;
}