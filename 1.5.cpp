#include <iostream>
using namespace std;

int main() {
    int v, t, s;
    cin >> v >> t;
    s = (v * t) % 109;
    if (s < 0){
        s += 109;
    }
    cout << s << endl;
    return 0;
}