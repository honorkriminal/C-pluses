#include <iostream>

namespace delivery {
    int cost(int count, int rate) {
        if (count < 1 || count > 20 || rate < 1 || rate > 500) {
            return -1;
        }
        return count * rate;
    }

    int cost(int count) {
        return cost(count, 50);
    }
}

int main() {
    std::cout << "--- Стоимость доставки ---\n"
              << "1 - Стандартный тариф | 2 - Индивидуальный\n"
              << "Режим: ";
    int mode;
    std::cin >> mode;
    if (mode != 1 && mode != 2) {
        std::cout << "Неизвестный режим\n";
        return 0;
    }

    int count;
    std::cout << "Количество посылок: ";
    std::cin >> count;
    int total;
    if (mode == 1) {
        total = delivery::cost(count);
    } else {
        int rate;
        std::cout << "Тариф: ";
        std::cin >> rate;
        total = delivery::cost(count, rate);
    }

    if (total == -1) {
        std::cout << "Неверные данные\n";
    } else {
        std::cout << "Стоимость: " << total << " руб.\n";
    }
}
