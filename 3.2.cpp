#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += pow(i,2);
        
    }
    cout << sum;
    return 0;
}