#include <bits/stdc++.h>
using namespace std;

set<int> s;

int main()
{
    s.insert(3);
    s.insert(6);
    s.insert(8);
    s.insert(13);
    s.insert(33);

    cout << *s.upper_bound(6) << "\n";
    cout << *s.upper_bound(13) << "\n";

    cout << *s.lower_bound(6) << "\n";
    auto it = s.end();

    cout << *(--it) << "\n";

    s.erase(s.upper_bound(6));

    cout << *s.upper_bound(6) << "\n";

    return 0;
}