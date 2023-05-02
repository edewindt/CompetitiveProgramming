#include <bits/stdc++.h>
using namespace std;
stack<string> s;
int main()
{
s.push("Monday");
s.push("Tuesday");
s.push("Friday");

cout << s.size() << endl;
cout << s.top() << endl; //looking at top item

s.pop(); //popping off the top item

cout << s.top() << endl;
s.pop();

cout << s.top() << endl;
s.pop();

cout << s.size() << endl; //should be 0
    return 0;
}