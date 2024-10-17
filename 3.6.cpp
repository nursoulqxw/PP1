#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    double sum = 0.0;

    for(int i = 1; i <= n; ++i){
        sum += 1.0 / pow(i,2);
    }
    cout << sum << endl;
    return 0;
}