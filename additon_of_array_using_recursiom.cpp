// additon_of_array_using_recursion
#include<iostream>
using namespace std;
int sum_(int i, int a[5]){
    if(i>=5) return 0;
    return a[i]+sum_(i+1,a);
}
int main(){
    int a[5]={1,2,3,4,5};
    cout<<sum_(0,a);
    return 0;
}