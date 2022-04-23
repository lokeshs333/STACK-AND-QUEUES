// done but std++ not present check code in 20 to 30 line

#include <iostream>
#include <stack>
#include <queue>

#include <vector>
using namespace std;

void rotten_oranges(int &m)
{
    int arr[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < m; i++)
        {
            if (arr[i][j] == 2)
            {
                q.push(i, j);
            }
        }
    }
    int count = 0;
    q.push(-1, -1);
    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        if (q.front().first == -1 && q.front().second == -1 && q.size() == 1)
        {
            q.pop();
            break;
        }
        else if (q.front().first == -1 && q.front().second == -1 && q.size() > 1)
        {
            count++;
            q.pop();
            q.push(-1, -1);
        }
        else
        {
            if ((i - 1) >= 0 && arr[i - 1][j] == 1)
            {
                // upward
                arr[i - 1][j] = 2;
                q.push(i - 1, j);
            }
            if ((i + 1) >= 0 && arr[i + 1][j] == 1)
            {
                // downward
                arr[i - 1][j] == 2;
                q.push(i + 1, j);
            }
            if ((j - 1) >= 0 && arr[i][j - 1] == 1)
            {
                // left
                arr[i][j - 1] == 2;
                q.push(i, j - 1)
            }
            if ((j + 1) >= 0 && arr[i][j + 1] == 1)
            {
                // right
                arr[i][j + 1] == 2;
                q.push(i, j + 1);
            }
        }
    }
}
int main()
{
    cout << "enter the content" << endl;
    rotten_oranges(3);

    return 0;
}