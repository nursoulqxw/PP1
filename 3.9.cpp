#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a;
    int sum;
    cin >> n >> a;


    for(int i=0; i<=n; i++){
        a=i;
        sum = pow(a,n);
    }

    cout << sum << endl;
    return 0;
}