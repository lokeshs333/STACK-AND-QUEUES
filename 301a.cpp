#include <iostream>
#include <stack>
using namespace std;

bool isparenthesis(string s)
{
    stack<char> st;
    bool ans = true;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || '{' || '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == ')')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '}')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == ']')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}
int main()
{
    string s = "{([])}";
    if (isparenthesis(s))
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalaid" << endl;
    }
    return 0;
}