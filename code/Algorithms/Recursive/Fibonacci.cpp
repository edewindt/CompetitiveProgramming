#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    //base case
    if(n<=1){
        return n;
    }
    //recursive case
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout << fib(n) << endl;
    return 0;
}