#include <bits/stdc++.h>
using namespace std;

vector<string> v = {"YES", "NO", "MAYBE-SO"};

int main()
{
v.push_back("Hello");
v.push_back("What?");
v.erase(v.begin(), v.begin()+1);
cout << v[3];
}
