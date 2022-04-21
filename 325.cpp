// { Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

// } Driver Code Ends
/*
The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution
{
public:
    // Function to find starting point where the truck can start to get through
    // the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n)
    {
        // Your code here
        int start = 0;
        int required_fuel = 0;
        int extra_fuel = 0;
        for (int i = 0; i < n; i++)
        {
            extra_fuel = extra_fuel + (p[i].petrol - p[i].distance);
            if (extra_fuel < 0)
            {
                start = i + 1;
                required_fuel = required_fuel + extra_fuel;
                extra_fuel = 0;
            }
        }
        if (required_fuel + extra_fuel >= 0)
        {
            return start;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{

    int n;
    cin >> n;
    petrolPump p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].petrol >> p[i].distance;
    Solution obj;
    cout << "answer is " << obj.tour(p, n) << endl;
}
// } Driver Code Ends