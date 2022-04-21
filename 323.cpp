// reverse the first k element of queue
// done in first attempt
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse_k_patches(queue<int> &q, int k)
{
    stack<int> st;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
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
    reverse_k_patches(q, 3);
    return 0;
}