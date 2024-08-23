#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<char> s;
    vector<string> v{"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    for(int i=0;i<v.size();i++){
        for(auto c:v[i]){
            s.insert(c);
        }
    }
    cout<<s.size();
    return 0;
}