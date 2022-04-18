// valid substring done self

#include <iostream>
#include <stack>
#include <string>
using namespace std;
void valid_substring(string s, int n)
{
    stack<char> st;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        if (st.empty() && s[i] == ')')
        {
            st.push(s[i]);
        }
        if (s[i] == ')')
        {
            st.pop();
        }
    }
    while (!st.empty())
    {
        st.pop();
        result++;
    }
    int ans = n - result;
    cout << "answer is " << ans << endl;
}
int main()
{
    string s = "(()(())((";
    int n = s.length();
    valid_substring(s, n);
    return 0;
}