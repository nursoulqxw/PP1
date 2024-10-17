#include <iostream>
using namespace std;

int main() {
    int a,b,c,n;
    cin >> n;
    a = (n / 10) % 10;
    b = n / 10;
    c = n % 10;
    cout << a + b + c << endl;
    return 0;
}