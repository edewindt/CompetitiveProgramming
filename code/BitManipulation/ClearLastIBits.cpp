#include <bits/stdc++.h>
using namespace std;
void clearLastBits(int &n, int i)
{
    int mask = (-1<<i);
    n = n & mask;
}
int main()
{
    int n = 25;
    int i = 2;
    clearLastBits(n, i);
    cout << n << endl;
    return 0;
}