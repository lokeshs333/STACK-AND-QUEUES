#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverse(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = st.top();
        st.pop();
    }
    cout << "reversed value is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
        }
}

using namespace std;
int main()
{
    string s = "lokesh";
    reverse(s);

    return 0;
}