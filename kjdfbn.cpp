#include<iostream>

using namespace std;
string giveString(string s) {
        string original="";
        for(int i=0;i<s.length();i++){
            char c=char(s[i]);
            int value=int(c);
            if(value>=97 && value<=122){
                    original+=c;
            }
            else if(value>=65 && value<=90){
                value+=32;
                c=char(value);
                original+=c;
            }
            
        }
        return original;
    }
    bool isPalindrome(string s) {
        string original=giveString(s);
        int start=0,end=original.length()-1;
        while(start<=end){
            if(original[start]!=original[end]){
                return false;
                break;
            }
            start++;
            end--;
        }
        return true;
    }
int main(){
    string a="0P";
    cout<< isPalindrome(a)<<endl;
    return 0;
}