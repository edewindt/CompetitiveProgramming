#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[6] = {1,2,3,4,5,6};
    cout << *array1 << endl;
    cout << (*array1 + 1) << endl;
    int *array2;
    array2 = (int*)malloc(5*sizeof(int));
    array2[0] = 23;
    cout << *array2 << endl;
    free(array2);
    int *array3;
    array3 = new int[5];
    array3[0] = 69;
    cout << *array3 << endl;
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