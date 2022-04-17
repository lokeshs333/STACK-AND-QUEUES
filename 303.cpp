

// smallalest element in an stack

#include <iostream>
#include <stack>
using namespace std;
void min(int a[], int size)
{
    stack<int> st;
    for (int i = 0; i < size; i++)
    {
        st.push(a[i]);
    }
    // cout << "top element is" << st.top() << endl;
    int count = 10000;
    for (int i = 0; i < st.size(); i++)
    {
        if (count > a[i])
        {
            count = a[i];
        }
    }
    cout << "smallest element is " << count << endl;
}
int main()
{
    int a[] = {111, 34, 54, 23, 56, 93, 37, 2, 32, 23, 23, 232, 434, 545};
    int size = 14;
    min(a, size);
    return 0;
}