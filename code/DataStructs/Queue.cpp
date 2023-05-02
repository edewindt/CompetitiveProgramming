#include <bits/stdc++.h>
using namespace std;

queue<string> q;

int main()
{
    q.push("First in line");
    q.push("2nd in line");
    q.push("Third in line");
    cout << q.front() << endl;//looking at the front of the line
    q.pop(); //front is leaving the line
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.size() << endl;//should be 0

}