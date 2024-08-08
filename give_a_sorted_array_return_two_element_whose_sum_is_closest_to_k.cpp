// give_a_sorted_array_return_two_element_whose_sum_is_closest_to_k
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {5, 9, 12, 23, 31}, k = 32, sc, ec;
    int start = 0, end = 4, diff = INT32_MAX, diff1 = INT32_MAX;
    while (start < end)
    {
        if (a[start] + a[end] < k)
            start++;
        else
            end--;
        diff = min(diff, abs(a[start] + a[end] - k));
        if (diff < diff1)
        {
            sc = start;
            ec = end;
        }
        diff1 = diff;
    }
    cout << "closest is: " << a[sc] << " " << a[ec];
    return 0;
}