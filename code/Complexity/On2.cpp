#include <bits/stdc++.h>
using namespace std;

string arr[] = {"All", "Roads", "Lead", "To","The","End"};
int x = 0;
int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);
    while (x < n)
    {
        for (int i = 0; i < n; i++)
        {
           cout << arr[i] + " ";
        }
        cout << endl;
        x++;
    }
    
    return 0;
}
