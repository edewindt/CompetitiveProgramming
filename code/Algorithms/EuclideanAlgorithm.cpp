#include <iostream>
using namespace std;

int gcd(int a, int b) {
    cout << a << " " << b << endl;
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a = 24, b = 36;
    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}
