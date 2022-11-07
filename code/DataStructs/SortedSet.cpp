#include <bits/stdc++.h>
using namespace std;

set<int> ss;

int main()
{
ss.insert(5);
ss.insert(2);
ss.insert(1);
ss.insert(8);
cout << ss.count(8) << "\n";
cout << *ss.begin() << "\n";
cout << *ss.upper_bound(2) << "\n";
cout << *ss.lower_bound(2) << "\n";
cout << *ss.lower_bound(4) << "\n";
}