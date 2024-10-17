#include <iostream>
#include <string>  // Для работы с типом string

int main() {
    std::string str1, str2;

    // Считываем две строки
    std::cin >> str1 >> str2;

    // Сравниваем строки
    if (str1 == str2) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
