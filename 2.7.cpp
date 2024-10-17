#include <iostream>
using namespace std;

int main() {    
    int a1,a2,b1,b2;
    cin >> a1 >>a2 >> b1 >>b2;
    if(abs(a1-b1) == abs(a2-b2) or (a1==b1) or (a2==b2)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}