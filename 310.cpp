#include <iostream>
#include <stack>
using namespace std;
// void insert(stack<int> &s, int e)
// {
//     if (s.empty() || s.top() < e)
//     {
//         s.push(e);
//         return;
//     }
//     int t = s.top();
//     s.pop();
//     insert(s, e);
//     s.push(t);
// }
// void SortedStack ::sort()
// {
//     // Your code here
//     if (s.empty())
//         return;
//     int t = s.top();
//     s.pop();
//     sort();
//     insert(s, t);
// }
stack<int> atbottom(stack<int> &s, int k)
{
    if (s.empty())
    {
        s.push(k);
    }
    else
    {
        int x = s.top();
        s.pop();
        s = atbottom(s, k);
        s.push(x);
    }
    return s;
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    else
    {
        int ele = s.top();
        s.pop();
        reverse(s);
        atbottom(s, ele);
    }
}
void print(stack<int> l)
{
    while (!l.empty())
    {
        cout << l.top() << " ";
        l.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(23);
    s.push(20);
    s.push(13);
    s.push(2);
    s.push(3);
    print(s);
    cout << endl;
    reverse(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl
         << endl;
    sort();

    return 0;
}
