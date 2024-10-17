#include <iostream>
using namespace std;

int main() {    
    int a,b,c;
    cin >> a >> b >> c;
    int m = a;
    if (m < b){
        m = b;
    }
    if (m < c){
        m = c;
    }
    cout << m;

    return 0;
}