#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b)
    return a;
    else if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}
int main(){
    int a=34818,b=45632;
    //  int greater = max(a, b);
   cout<< gcd(a,b);
    return 0;
}