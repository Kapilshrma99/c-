#include <iostream>
using namespace std;
int main()
{
    int n = 4, count=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    return 0;
}
// output:
// *
// *       *
// *       *       *
// *       *       *       *