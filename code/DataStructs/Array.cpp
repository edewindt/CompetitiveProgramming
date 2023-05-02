#include <bits/stdc++.h>
using namespace std;

string arr[6] = {"Sky", "Mai", "Emm", "Sam", "Gleb"};

int main()
{
arr[5] = "Allen";
int n = sizeof(arr)/sizeof(arr[0]);
cout << "My friends are: ";
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
cout << endl;
}
