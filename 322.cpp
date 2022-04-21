#include <iostream>
#include <queue>
using namespace std;
void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int a = q.front();
    q.pop();
    reverse(q);
    q.push(a);
    while (!q.empty())
    {
        cout << q.front() << endl
             << endl;

        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverse(q);
    return 0;
}