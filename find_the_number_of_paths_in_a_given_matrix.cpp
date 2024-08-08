// find_the_number_of_paths_in_a_given_matrix
#include<iostream>
using namespace std;
int paths(int i,int j,int dime){
    if(i<0 || i>=dime || j<0 || j>=dime) return 0;
    if(i==dime-1 && j==dime-1) return 1;
    int ways=0;
    ways+=paths(i+1,j,dime);
    ways+=paths(i,j+1,dime);
    return ways;

}
int main(){
    cout<<paths(0,0,3);
    return 0;
}