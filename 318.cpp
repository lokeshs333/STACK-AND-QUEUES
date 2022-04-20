// implement queue using stack
// you just have to convert the lifo to fifo
// done in the first attempt
#include <iostream>
#include <stack>
using namespace std;
void inplementing_queue_using_stack_pop(stack<int> st)
{

    stack<int> s;
    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    cout << "answer is  " << s.top() << endl;
    s.pop();
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }
}
void implementing_queue_using_stack_push(stack<int> st, int pushed_ele)
{
    stack<int> s;
    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    s.push(pushed_ele);
    cout << "answer is  " << s.top();
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
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
    st.push(7);
    // cout << st.top();
    inplementing_queue_using_stack_pop(st);
    implementing_queue_using_stack_push(st, 333);
    return 0;
}