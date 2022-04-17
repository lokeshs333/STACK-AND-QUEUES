// // largest area in histogram
// // ittearative approach

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int arr[] = {0, 6, 2, 5, 4, 5, 1, 6, 0};
    int n = 9;
    int area;
    for (int i = 0; i < n - 1; i++)
    {
        int left = i;
        int right = i;
        while (arr[left] >= arr[i])
        {
            left--;
        }
        while (arr[right] >= arr[i])
        {
            right++;
        }
        cout << "the area is " << (arr[i] * (right - left - 1)) << endl;
    }
    return 0;
}