#include <bits/stdc++.h>
using namespace std;
int main()
{

    //Statically Allocated Array
    int array1[6] = {1,2,3,4,5,6};
    cout << *array1 << endl;
    cout << (*array1 + 1) << endl;

    //Dynamically Allocated Array
    int *array2;
    array2 = (int*)malloc(5*sizeof(int));
    array2[0] = 23;
    cout << *array2 << endl;
    free(array2);

    //Dynamically Allocated Using New Keyword
    int *array3;
    array3 = new int[5];
    array3[0] = 69;
    cout << *array3 << endl;
    delete(array3);

    //Statically Allocated String
    char hello[18] = "Hello World";
    hello[11] = 's';
    cout << hello << endl;

    //Dynamically Allocated String
    char *hello2;
    hello2 = (char*)malloc(18*sizeof(char));
    hello2[0] = 'H';
    hello2[1] = 'e';
    hello2[2] = 'l';
    hello2[3] = '\0';
    cout << hello2 << endl;
    free(hello2);

    //Dynamically allocated initilized as all Zeros
    int * array5;
    array5 = (int*)calloc(5,sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cout << array5[i] << endl;
    }

    //Reallocates and resizes an existing BLock of Dynamically Allocated Memory
    int* resized_array = (int*)realloc(array5, 10*sizeof(int));
    if (resized_array == NULL)
    {
        free(array5);
        exit( 1 );
    }
    
    resized_array[6] = 10;
    cout << resized_array[4] << endl;
    cout << resized_array[6] << endl;
    free(resized_array);
    free(array5);

    //Regular Pointer
    int number = 69;
    int *Pointer1 = &number;
    number++;
    *Pointer1+=1;
    cout << *Pointer1 << endl;
    cout << number <<endl;
    return 0;
}