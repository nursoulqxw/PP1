#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int sum = 1;
    int f = 1;

    for(int i=0; i<=n; i++){
        f += i;
        sum += 1/f;
    }

    cout << sum << endl;
    return 0;
}