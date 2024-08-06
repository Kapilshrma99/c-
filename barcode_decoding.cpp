// barcode decoding/
#include<iostream>
using namespace std;
int main(){
    int price=0;
    string s="CD#34";
    for(int i=0;i<s.size();i++)
        if(isdigit(s[i]))
            price+=(s[i]-48);
        else{
            int mx=INT32_MIN;
            int num=int(s[i]);
            while(num!=0){
                int temp=num % 10;
                mx=max(mx,temp);
                num=num / 10;
            }
            // cout<<mx<<endl;
            price+=mx;
        }
    cout<<price;
    return 0;
}