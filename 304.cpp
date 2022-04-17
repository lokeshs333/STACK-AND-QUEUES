#include <iostream>
#include <vector>
#include <stack>
// 4 5 2 25 7 8
using namespace std;
vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); ++i)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << v[nge[i]] << endl;
    }
    return 0;
}