#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a;
    cin >> n >> a;
    int sum = 0;
    for(n = 0; n <= a; n++){
        sum = sum + pow(a,n);
        // cout << sum << " ";
    }
    cout << sum;
    return 0;
}