// binary to dicimal.cpp
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string binary="101100";
    // binary=reverse(binary.begin(), binary.end());
    int number=0,count=0;
    reverse(binary.begin(), binary.end());
    for(auto it:binary){

    char a=it;
        if(a=='0'){
            count++;
        }
        else{
            number+=pow(2,count);
            count++;
        }
       
    }
     cout<<endl<<number<<endl;
        
    return 0;
}