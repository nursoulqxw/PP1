#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> uniqueNumbers;

    for (int i = 0; i < N; ++i) {
        string command;
        int number;
        cin >> command;

        if (command == "ADD") {
            cin >> number;
            uniqueNumbers.insert(number);
        } else if (command == "PRESENT") {
            cin >> number;
            cout << (uniqueNumbers.count(number) ? "YES" : "NO") << endl;
        } else if (command == "COUNT") {
            cout << uniqueNumbers.size() << endl;
        }
    }

    return 0;
}
