#include <bits/stdc++.h>
using namespace std;
stack<string> s;
int main()
{
s.push("Monday");
s.push("Tuesday");
s.push("Friday");

cout << s.size() << "\n";
cout << s.top() << "\n";

s.pop();

cout << s.top();

    return 0;
}