// the celebrity problem

#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// Function to find if there is a celebrity in the party or not.

// function below has a time complexity of on2 so we can optimize further in a time complexity of 0n
int celebrity(vector<vector<int> > &a, int n)
{
    int in[n];
    int out[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                in[j]++;
                out[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (in[i] == n - 1 && out[i] == 0)
        {
            return i;
        }
    }
    return -1;
}
// int celebrity(vector<vector<int> > &a, int n)
// {
//     int in[n] = {0};
//     int out[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i][j] == 1)
//             {
//                 in[j]++;
//                 out[i]++;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (in[i] == n - 1 && out[i] == 0)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// { Driver Code Starts.

int main()
{

    int n;
    cin >> n;
    vector<vector<int> > M(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }

    int a = celebrity(M, n);
    cout << "value is " << a << endl;
}
// } Driver Code Ends