#include <bits/stdc++.h>
using namespace std;
//  Array must be sorted.
// Find the mid point. If you found the value, great.
// If the target is higher than the mid point eliminate the lower half.
// If the target is lower than the mid point eliminate the upper half.
//Repeat this step until the target is found.
int binarySearch(vector<int> arr, int n, int target){
int low = 0; //lowest index;
int high = n - 1; //last index;
int num = 1;
while (low <= high) // checks wether the lowest index is larger than the highest
{
    cout << "Step " << num << endl;
    num ++;
    int mid = low + (high - low) / 2; // find the middle index

    int value = arr[mid]; //the middle value
    cout << "Middle Index: " << mid << "|Value: " << value << endl;
    if (value < target)
    {
        low = mid + 1;
    } else if (value > target)
    {
        high = mid - 1;
    } else{
        cout << "Target Found." << endl;
        return mid;
        
    }
    
}
return -1; //if target doesn't exist
}

int main()
{
    vector<int> v = {2,3,4,5,6,7,8,11,15,19,22,33,35,37,43};
    int n = v.size();
    int x = 35;
    int t = binarySearch(v, n, x);
    cout << t << endl;
    return 0;
}