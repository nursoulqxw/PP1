#include <iostream>
using namespace std;

int main() {    
    int a1,a2,b1,b2;
    cin >> a1 >>a2 >> b1 >>b2;
    if((abs(a1-b1) == 1 and abs(a2-b2)==2) or (abs(a2-b2)==1 and abs(a1-b1)==2)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}