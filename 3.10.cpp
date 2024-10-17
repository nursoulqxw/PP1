#include <iostream>

int main() {
    int x, p, y;
    
    
    std::cin >> x >> p >> y;
    
    int years = 0;
    
    
    while (x < y) {
        x += (x * p) / 100;
        years++;
    }

   
    std::cout << years << std::endl;

    return 0;
}