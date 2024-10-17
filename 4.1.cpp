#include <iostream>
#include <cctype>  // Для функции isdigit()

int main() {
    char c;
    
    // Считываем символ
    std::cin >> c;
    
    // Проверяем, является ли символ цифрой
    if (isdigit(c)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
