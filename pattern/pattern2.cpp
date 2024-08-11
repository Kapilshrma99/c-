#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}
// output:
// 4       3       2       1
// 4       3       2       1
// 4       3       2       1
// 4       3       2       1