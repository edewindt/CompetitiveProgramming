#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number = 69;
    int *Pointer1 = &number;
    number++;
    *Pointer1 += 1;
    cout << *Pointer1 << endl;
    cout << number <<endl;
    return 0;
}