#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = (n+2-(n%2));
    cout << sum << endl;
    return 0;
}