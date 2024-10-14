#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    string s;
    getline(cin,s);
    stringstream ss(s);

    string token;
    while(getline(ss,token,',')){
        int num=stoi(token);
        v.push_back(num);


    }
for(int i:v){
    cout<<i;
}
(v[0]!=7 && v[1]!=7 && v[2]!=7) && cout<< v[0]*v[1]*v[2];
(v[0]==7) && cout<<v[1]*v[2];
(v[0]==7 && v[1]==7) && cout<<v[3];


    return 0;
}