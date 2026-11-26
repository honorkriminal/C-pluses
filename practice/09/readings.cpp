#include <iostream>

void printValue(int count) {
    std::cout << "Count: " << count << '\n';
}

void printValue(double reading) {
    std::cout << "Reading: " << reading << '\n';
}

void printValue(bool running) {
    std::cout << "Running: " << std::boolalpha << running << '\n';
}

int main() {
    int count, state;
    double reading;
    std::cout << "Количество: ";
    std::cin >> count;
    std::cout << "Показание: ";
    std::cin >> reading;
    std::cout << "Состояние (0/1): ";
    std::cin >> state;
    bool running = (state == 1);

    printValue(count);
    printValue(reading);
    printValue(running);
    printValue(1);
    printValue(1.0);
    printValue(true);
}
