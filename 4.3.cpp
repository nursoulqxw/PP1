#include <iostream>
#include <cctype>  // Для функций toupper() и tolower()

int main() {
    char c;
    
    // Считываем символ
    std::cin >> c;
    
    // Проверяем, если символ является строчной буквой
    if (islower(c)) {
        // Преобразуем в заглавную
        c = toupper(c);
    }
    // Если символ является заглавной буквой
    else if (isupper(c)) {
        // Преобразуем в строчную
        c = tolower(c);
    }

    // Выводим результат
    std::cout << c << std::endl;

    return 0;
}
