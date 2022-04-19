// inplement stack using queue
// done finaly heheheheheheheheheheheheheheheheheh
#include <iostream>
#include <stack>
#include <queue>

using namespace std;
void queueprint(queue<int> ss)
{
    while (!ss.empty())
    {
        cout << ss.front() << endl;
        ss.pop();
    }
}
void implement_stack_using_queue(queue<int> qu)
{
    cout << "lokesh pandey" << endl;
    // implement stack using two queue;
    // phle ham do queue banaenge fir ham apni queue(orignal) ke data ko q1 me dalenge
    // fir ham q2 ke data ko push karenge q1 me jab tak q2 khali na ho jae
    // fir ham q1 ke data ko q2 me dalenge jabtak q1 khali na ho jae
    // fir hamara kam ho jaega

    queue<int> q1;
    queue<int> q2;
    while (!qu.empty())
    {
        q1.push(qu.front());
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        qu.pop();
    }

    cout << q2.front();
}
int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);
    que.push(6);
    cout << "my name is lokesh pandey" << endl;
    // queueprint(que);˜
    cout << "love uh bitch" << endl;
    implement_stack_using_queue(que);
    return 0;
}