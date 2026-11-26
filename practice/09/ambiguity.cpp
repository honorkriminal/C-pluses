#include <iostream>

int mix(int a, double b) {
    return 1;
}

int mix(double a, int b) {
    return 2;
}

int main() {
    std::cout << mix(2, 3.0) << '\n';
    std::cout << mix(2.0, 3) << '\n';
}
