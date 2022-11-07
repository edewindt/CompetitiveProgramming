#include <bits/stdc++.h>
using namespace std;

map<int, string> m;

int main()
{
    m[1] = "Elias";
    m[3] = "Xiel";
    m[5] = "Adynn";
    m[0] = "Dragon";
    cout << m[3] << "\n";
    cout << m.upper_bound(1)->first << " " << m.lower_bound(5)->second << '\n';
}