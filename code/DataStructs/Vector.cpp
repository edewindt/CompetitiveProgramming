#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
    v.push_back(3);
    v.push_back(45);
    v.push_back(69);
    v.push_back(102);
    v[0] = 33; //sets element at index 0 to 33
    v.erase(v.begin()); //removes first element
    v.erase(v.end()-1); //removes last element
    for ( vector<int>::iterator it = v.begin(); it != v.end(); ++it) //iterates by means of iterator
    {
        cout << *it;
    }
    cout << endl;
    
    return 0;
}
