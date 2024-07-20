// Given a number, print all primes smaller than it
#include<iostream>
using namespace std;
int main(){
    int j;
    int number=50;
    for(int i=2;i<number;i++){//5
        int count=0;
        for(j =2;j<i;j++){
                if(i%j==0){
                    count++;
                    break;
                }
        }
        (count==0) && cout<<i<<" ";
    }
    return 0;
}