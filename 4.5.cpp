#include <iostream>
#include <string>
#include <sstream>  // Для std::istringstream

int main() {
    std::string line;
    
    // Считываем всю строку целиком
    std::getline(std::cin, line);
    
    // Создаем поток для разделения строки на слова
    std::istringstream iss(line);
    std::string word;
    int word_count = 0;
    
    // Считываем слова по одному и считаем их количество
    while (iss >> word) {
        word_count++;
    }
    
    // Выводим количество слов
    std::cout << word_count << std::endl;
    
    return 0;
}
