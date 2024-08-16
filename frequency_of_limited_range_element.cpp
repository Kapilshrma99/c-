// frequency_of_limited_range_element.
#include <iostream>
#include <vector>
using namespace std;
void frequency_count(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i]--;
    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += n;
    for (int i = 0; i < n; i++)
        (arr[i] / 2) ? arr[i] = arr[i] / n : arr[i] = 0;
}
int main()
{
    vector<int> arr{2, 3, 2, 3, 5};
    frequency_count(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
    return 0;
}