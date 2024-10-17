#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum = pow(2,i);
        
    }
    cout << sum;
    return 0;
}