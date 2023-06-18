#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[6] = {1,2,3,4,5,6};
    cout << *array1 << endl;
    cout << (*array1 + 1) << endl;
    char hello[18] = "Hello World";
    cout << hello << endl;
    int number = 69;
    int *Pointer1 = &number;
    number++;
    *Pointer1 += 1;
    cout << *Pointer1 << endl;
    cout << number <<endl;
    return 0;
}