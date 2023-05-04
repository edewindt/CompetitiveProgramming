/*
You are given N (3 ≤ N ≤ 5000) integer points on the coordinate plane. Find the square
of the maximum Euclidean distance (aka length of the straight line) between any two of the
points.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> x_coordinates;
vector<int> y_coordinates;
int main()
{
    int input;
    cout << "Provide 3 x coordinates:" << endl;
    cin >> input;
        x_coordinates.push_back(input);
    cin >> input;
        x_coordinates.push_back(input);
    cin >> input;
        x_coordinates.push_back(input);

    cout << "Provide 3 y coordinates:" << endl;
    cin >> input;
        y_coordinates.push_back(input);
    cin >> input;
        y_coordinates.push_back(input);
    cin >> input;
        y_coordinates.push_back(input);
    
        int n = x_coordinates.size();
    


int high = 0; // storing the current maximum
for(int i = 0; i < n; i++){ // for each first point
for(int j = i+1; j < n; j++){ // for each second point
int dx = x_coordinates[i] - x_coordinates[j];
int dy = y_coordinates[i] - y_coordinates[j];
high = max(high, dx*dx + dy*dy);

cout << "High:" << high << endl;
// if the square of the distance between the two points is greater than
// our current maximum, then update the maximum
}
}
cout << "The highest Euclidean distance is:" << high << endl;
    return 0;
}