#include <iostream>

int globalValue = 100;

int localNext() {
    int count = 0;
    return ++count;
}

int persistentNext() {
    static int count = 0;
    return ++count;
}

int main() {
    int localValue = 20;
    std::cout << "--- Область видимости ---\n";
    {
        int innerValue = 5;
        std::cout << "Вложенный блок: " << innerValue << '\n';
    }
    std::cout << "Локальная переменная: " << localValue << '\n';
    std::cout << "Глобальная переменная: " << ::globalValue << '\n';

    std::cout << "--- Счётчики ---\n";
    for (int i = 1; i <= 3; ++i) {
        int local = localNext();
        int persistent = persistentNext();
        std::cout << "Вызов " << i << ": local=" << local
                  << ", static=" << persistent << '\n';
    }
}
