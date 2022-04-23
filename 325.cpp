// self done petrol pump problem
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
struct petrol_pump
{
    int petrol;
    int distance;
};
void solution(petrol_pump p[], int n)
{
    int required_petrol = 0;
    int extra_petrol = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        extra_petrol += p[i].petrol - p[i].distance;
        if (extra_petrol < 0)
        {
            start++;
            required_petrol += extra_petrol;
            extra_petrol = 0;
        }
    }
    if (extra_petrol + extra_petrol >= 0)
    {
        cout << "answer is" << start;
    }
    if (extra_petrol + extra_petrol < 0)
    {
        cout << "answer is "
             << "   -1   " << endl;
    }
}
int main()
{
    int n = 4;

    petrol_pump arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].petrol >> arr[i].distance;
    }
    solution(arr, n);
    return 0;
}