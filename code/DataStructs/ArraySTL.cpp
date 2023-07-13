#include <bits/stdc++.h>
using namespace std;

array<int, 6> arr = {1,2,3,4,5,6};
int main()
{
    int n = arr.size();
    auto start_time = clock();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    auto end_time = clock();
    cout << endl;
    cout << end_time - start_time << endl;
    cout << "Start Time: " << start_time << " End Time: " << end_time << endl;
    return 0;
}