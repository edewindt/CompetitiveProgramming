#include <bits/stdc++.h>
using namespace std;

// void addNums(int a, int b, int *res)
// {
//     *res = a + b;
// }

struct Person
{
    int age;
    char *name;
};

struct City
{
    char *city_name;
};
struct State
{
    City *city;
};
struct Country
{
    State *state;
    State *state2;
};
int main()
{
    char city[] = "Chicago";
    char city2[] = "Detroit";
    struct City Chicago = {city};
    struct City Detroit = {city2};
    struct State Illinois = {&Chicago};
    struct Country UnitedStates = {&Illinois};
    struct Country *UnitedStates_ptr = &UnitedStates;
    char *cityname = UnitedStates_ptr->state->city->city_name;
    char *cityname = (*(*(*UnitedStates_ptr).state).city).city_name;
//     cout << cityname << endl;
    struct Person ProjectXiel;

    ProjectXiel.age = 69;
    struct Person *person_ptr;
    person_ptr = &ProjectXiel;

    person_ptr->age=69;

    (*person_ptr).age = 66;
    cout << ProjectXiel.age << endl;

    char name[] = "ProjectXiel";
    (*person_ptr).name = name;
    cout << ProjectXiel.name << endl;

    // int res = 0;
    // addNums(2,2, &res);

    // cout << res << endl;

    // //Statically Allocated Array

    // {
    int array1[6];
    array1[0] = 23;
    cout << *array1 << endl;
    // int array1[6] = {1,2,3,4,5,6};
    // cout << *array1 << endl;
    // cout << &array1[0] << endl;
    // array1[0] = 55;
    // cout << array1[0] << endl;
    // (*array1 + 2) = 4; 
    // cout << (&array1[0] == array1) << endl;
    // cout << (array1 + 1) << endl;
    // cout << (array1 + 2) << endl;
    // cout << (array1 + 3) << endl;
    // cout << (array1 + 4) << endl;
    // cout << (array1 + 5) << endl;
    // //Dynamically Allocated Array
    int size = 6;
    int *array2 = (int*)malloc(size*sizeof(int));
    if(array2 == NULL){
        exit( 1 );
    }
    array2[0] = 23;
    cout << *array2 << endl;
    free(array2);
    // cout << sizeof(int) << endl;
    // //Dynamically Allocated Using New Keyword
    int *array3 = new int[5];
    // if(array3 == NULL){
    //     exit( 1 );
    // }
    array3[0] = 69;
    cout << *array3 << endl;
    delete(array3);

    // //Segmentation Fault
    // char *name = "ProjectXiel";
    // name[0] = 'A';
    // cout << name << endl;

    // //Statically Allocated String
    // char hello[18] = "Hello World";
    // hello[11] = 's';
    // cout << hello << endl;

    //Contigous String
    char *hello1;
    hello1 = (char*)calloc(18,sizeof(char));
    if (hello1 != NULL)
    {
        strncpy(hello1, "Hello", 18);
    }
    cout << hello1 << endl;
    free(hello1);



    // //Dynamically Allocated String
    char *hello2;
    hello2 = (char*)malloc(18*sizeof(char));
    if(hello2 == NULL){
        exit( 1 );
    }
    hello2[0] = 'H';
    hello2[1] = 'e';
    hello2[2] = 'l';
    hello2[3] = 'l';
    hello2[4] = 48;
    hello2[5] = '\0';

    cout << hello2 << endl;
    free(hello2);

    // //Dynamically allocated initilized as all Zeros
    // int * array4 = (int*)calloc(5,sizeof(int));
    // if(array5 == NULL){
    //     exit( 1 );
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << array5[i] << endl;
    // }

    // //Reallocates and resizes an existing Block of Dynamically Allocated Memory
    // int* resized_array = (int*)realloc(array4, 10*sizeof(int));
    // if (resized_array == NULL)
    // {
    //     free(array4);
    //     exit( 1 );
    // }

    // char *programmer = (char*)malloc(18*sizeof(char));
    // if (programmer == NULL)
    // {
    //     exit( 1 );
    // }
    // const char *name = "Project";
    // programmer[0] = 'T';
    // programmer[1] = 0;
    // programmer[99] = 'Y';
    // cout << programmer << " " << name << endl;
    // Segmentaion Fault
    // int *getting = NULL;
    // cout << *getting << endl;

    // resized_array[6] = 10;
    // cout << resized_array[4] << endl;
    // cout << resized_array[6] << endl;
    // free(resized_array);

    // //Regular Pointer
    // int number = 69;
    // int *Pointer1 = &number;
    // int num_copy = number;
    // number++;
    // cout << number << endl;
    // cout << num_copy << endl;
    // int *Pointer1 = &number;
    // int num = *Pointer1;
    // cout << num << endl;
    // number++;
    // *Pointer1+=1;
    // cout << *Pointer1 << endl;
    // cout << number <<endl;



    // int numbers[2] = {1, 2};
    // numbers[99];
    // cout << numbers[99] << endl;


//     int myInt = 10;
//     struct Person {
//         char name[20];
//         int age;
//     };

// struct Person person = {"John Doe", 25};

// cout << &numbers << endl << &myInt << endl << &person << endl;
    return 0;
}