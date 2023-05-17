#include <bits/stdc++.h>
using namespace std;

int convertToBinary(int n)
{

    int result = 0;
    int p = 1;

    while (n>0)
    {
        int last_bit = (n&1);
        result += p*last_bit;

        p = p*10;
        n = n>>1;
    }
    return result;
}

int main()
{
    
    int n;
    cin>>n;
    cout<<convertToBinary(n)<<endl;
    return 0;
}