#include <bits/stdc++.h>
using namespace std;

    int fact(int n){
       //base case
       if(n==0){
        return 1;
       }
       //recursive case
       return n*fact(n-1);
    }

int main()
{
    int n;
    cin>>n;    
    auto start_time = clock();
    cout << fact(n) << endl;
    auto end_time = clock();
    cout << end_time - start_time << endl;
    cout << "Start Time: " << start_time << " End Time: " << end_time << endl;
    return 0;
}