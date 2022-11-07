#include <bits/stdc++.h>
using namespace std;

multiset<string> ms;

int main()
{
    ms.insert("Mario");
    ms.insert("Bowser");
    ms.insert("Luigi");
    cout << ms.count("Mario") << "\n";
    ms.erase("Mario");
    cout << ms.count("Mario") << "\n";
    ms.insert("Luigi");
    cout << ms.count("Luigi") << "\n";
}