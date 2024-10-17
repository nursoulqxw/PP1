#include <iostream>
#include <set>  // Для работы с множествами

using namespace std;

int main() {
    int N;
    cin >> N;  // Считываем количество чисел
    
    set<int> uniqueNumbers;  // Создаем множество для хранения уникальных чисел
    
    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;  // Считываем число
        uniqueNumbers.insert(number);  // Добавляем число в множество
    }
    
    // Выводим количество различных чисел
    cout << uniqueNumbers.size() << endl;
    
    return 0;
}
