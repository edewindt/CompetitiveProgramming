#include <bits/stdc++.h>
using namespace std;

set<string> us;

int main()
{
    us.insert("USA");
    us.insert("Canada");
    us.insert("Mexico");
    us.insert("Australia");
    us.erase("USA");
    us.erase("Canada");
    cout << us.count("Canada") << "\n";
    cout << us.count("Australia") << "\n";
}
