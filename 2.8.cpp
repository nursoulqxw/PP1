#include <iostream>
using namespace std;

int main() {    
    int x1,x2,y1,y2;
    cin >> x1 >>x2 >> y1 >>y2;
    if(abs(x1-x2) <= 1 and abs(y1-y2) <= 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}