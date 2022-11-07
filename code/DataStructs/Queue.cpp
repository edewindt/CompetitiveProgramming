#include <bits/stdc++.h>
using namespace std;

queue<string> q;

int main()
{
    q.push("First in line");
    q.push("2nd in line");
    q.push("Third in line");
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";

}