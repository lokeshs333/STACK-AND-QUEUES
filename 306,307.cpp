// infix to postfix

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 2;
    }
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void infixtopostfix(string s)
{
    stack<char> st;
    string answer;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            answer += s[i];
        }
        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                answer += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        answer += st.top();
        st.pop();
    }

    cout << answer << endl;
}

int main()
{

    string s = "a+b*c-d*e+f";
    infixtopostfix(s);
    return 0;
}