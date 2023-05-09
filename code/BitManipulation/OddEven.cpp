#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x&1) //checks the last bit with OR operator
    {
        cout << "Odd" << endl;
    }else
    {
        cout << "Even" << endl;
    }
    return 0;
}