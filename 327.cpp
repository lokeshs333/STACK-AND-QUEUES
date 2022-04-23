// Distance of nearest cell having 1
// done self i know the answer is right but due to some header file problem it is showing problem..
#include <iostream>
#include <queue>
using namespace std;
void first_negetive_of_size_k(int n)
{
    queue<pair<int, int>> q;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                arr[i][j] == 0;
            }
            if (arr[i][j] == 0)
            {
                arr[i][j] == 333;
                q.push(i, j);
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {

    //     }
    // }
    while (!q.empty())
    {
        int i = q.front().first();
        int j = q.front().second();
        if ((i - 1) >= 0 && arr[i - 1][j] == 333)
        {
            // upward
            arr[i - 1][j] == arr[i][j] + 1;
            q.push(i, j);
        }
        if ((i + 1) >= 0 && arr[i - 1][j] == 333)
        {
            // downward
            arr[i - 1][j] == arr[i][j] + 1;
            q.push(i, j);
        }
        if ((j - 1) >= 0 && arr[i][j - 1] == 333)
        {
            // left
            arr[i][j - 1] == arr[i][j] + 1;
            q.push(i, j);
        }
        if ((j + 1) >= 0 && arr[i][j + 1] == 333)
        {
            // right
            arr[i][j + 1] == arr[i][j] + 1;
            q.push(i, j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the n" << endl;
    cin >> n;
    first_negetive_of_size_k(n);

    return 0;
}