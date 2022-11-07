#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> um;

int main()
{
    um["Wisconsin"] = "Madison";
    um["Florida"] = "Miami";
    um["Texas"] = "Houston";

    cout << um["Wisconsin"] << "\n";
    cout << um["Florida"] << "\n";
    cout << um.count("Wisconsin") << "\n";
    um.erase("Texas");
    cout << um.count("Texas");
}