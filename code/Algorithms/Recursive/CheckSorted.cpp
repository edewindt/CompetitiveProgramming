#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n<=0){
        return true;
    }
    //recursive case
    if(arr[0]<arr[1] && isSorted(arr+1, n-1)){
        return true;
    }
    return false;
}

int main()
{
    
    int arr[] = {1,2,3,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    cout << isSorted(arr, n) << endl;
    return 0;
}