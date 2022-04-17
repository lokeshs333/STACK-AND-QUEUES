// // insert the element at the bottom of the stack

// // its the itterative approach esay to implement done it easily in first attempt
// #include <iostream>
// #include <stack>
// using namespace std;

// void insert_at_bottom(int x, stack<int> s)
// {
//     stack<int> temp;
//     while (!s.empty())
//     {
//         temp.push(s.top());
//         s.pop();
//     }
//     s.push(x);
//     while (!temp.empty())
//     {
//         s.push(temp.top());
//         temp.pop();
//     }
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }

// int main()
// {
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     s.push(7);

//     insert_at_bottom(1, s);

//     return 0;
// }

// this is the recursive approach and also the best approach for solving the problem
// C++ program for the above approach
#include <iostream>
#include <stack>
using namespace std;

// Recursive function to use implicit stack
// to insert an element at the bottom of stack
stack<int> recur(stack<int> S, int N)
{
    // If stack is empty
    if (S.empty())
        S.push(N);

    else
    {

        // Stores the top element
        int X = S.top();

        // Pop the top element
        S.pop();

        // Recurse with remaining elements
        S = recur(S, N);

        // Push the previous
        // top element again
        S.push(X);
    }
    return S;
}

// Function to insert an element
// at the bottom of stack
void insertToBottom(
    stack<int> S, int N)
{

    // Recursively insert
    // N at the bottom of S
    S = recur(S, N);

    // Print the stack S
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
}

// Driver Code
int main()
{
    // Input
    stack<int> S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);

    int N = 7;

    insertToBottom(S, N);

    return 0;
}
