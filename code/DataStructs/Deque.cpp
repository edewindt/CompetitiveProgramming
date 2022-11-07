#include <bits/stdc++.h>
using namespace std;

deque<string> dq;

int main()
{
dq.push_front("Rock");
dq.push_back("Paper");
dq.push_front("Scissors");
cout << dq.front() << "\n";
cout << dq.back() << "\n";
dq.pop_front();
cout << dq.front() << "\n";
dq.pop_back();
cout << dq.back() << "\n";
}