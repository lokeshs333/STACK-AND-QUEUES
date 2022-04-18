/* C++ Program to check whether valid
expression is redundant or not*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
void check_redundancy(string s)
{
    stack<char> st;
    bool ans = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        if (s[i] == '+' || s[i] == '/' || s[i] == '*' || s[i] == '-')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }
            while (st.top() == '+' || st.top() == '/' || st.top() == '*' || st.top() == '-')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans;
}
int main()
{
    string s = "((a+b)+x)";
    check_redundancy(s);
    return 0;
}