#include<iostream>
using namespace std;
void divide(int &n1,int &n2,int &n3){
        n1=n1/10;
        n2=n2/10;
        n3=n3/10;
}
int main(){
    int once,ten,hund,tho;
    int n1=3521;
    int n2=2452;
    int n3=1352;
    once=(max(n1%10,max(n2%10,n3%10)));
    divide(n1,n2,n3);
    ten=(min(n1%10,min(n2%10,n3%10)));
    divide(n1,n2,n3);
    hund=(max(n1%10,max(n2%10,n3%10)));
    divide(n1,n2,n3);
    tho=(min(n1%10,min(n2%10,n3%10)));
    divide(n1,n2,n3);
    cout<<once+ten*10+hund*100+tho*1000;
    return 0;
}