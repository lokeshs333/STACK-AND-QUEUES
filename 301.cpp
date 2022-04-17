// is valid parenthesis lor not
#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool isvalid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' or '[' or '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == ')')
            {
                st.pop();
            }
            else
            {
                ans = false;
                // return ans;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '}')
            {
                st.pop();
            }
            else
            {
                ans = false;
                // return ans;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == ']')
            {
                st.pop();
            }
            else
            {
                ans = false;
                // return ans;
                break;
            }
        }
    }
    if (!st.empty())

        return false;

    return ans;
}
int main()
{
    string s = "()";
    if (isvalid(s))
    {
        cout << "valid string" << endl;
    }
    else
    {
        cout << "not a valid string" << endl;
    }
    return 0;
}
