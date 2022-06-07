// C++ code to reverse a
// stack using recursion..
#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
    }
    else
    {
        int topele = st.top();
        st.pop();
        insertatbottom(st, ele);
        st.push(topele);
    }
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int ele = s.top();
    s.pop();
    reverse(s);
    insertatbottom(s, ele);
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
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    print(st);
    cout << endl;
    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
