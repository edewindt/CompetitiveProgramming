#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
int main()
{
 pq.push(8);
 pq.push(4);
 pq.push(6);
 pq.push(1);
 cout << pq.top() << '\n'; 
 pq.pop();
 cout << pq.top() << '\n';  
    return 0;
}
