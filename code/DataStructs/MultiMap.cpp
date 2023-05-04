#include <bits/stdc++.h>
using namespace std;

multimap<int, string> mm;
int main()
{
    mm.insert(make_pair(1, "Happy"));
    mm.insert(make_pair(3, "Sad"));
    mm.insert(make_pair(1, "Excited")); //Add a second value for 1
    mm.insert(make_pair(5, "Confused"));
    auto range = mm.equal_range(1);
    for (auto it = range.first; it != range.second; it++) //iterates all values with the key 1
    {
        cout << it->second << "\n";
    }
    
    return 0;
}