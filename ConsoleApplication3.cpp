#include <iostream>

enum class Operation : char {
	Add =  '+',
	Subtract = '-',
	Multiply = '*',
	Divide = '/'
};

int main() {
	double a, b;
	char opInput;

	std::cout << "Enter expression: ";
	std::cin >> a >> opInput >> b;

	Operation op = static_cast<Operation>(opInput);

	switch (op) {
	case Operation::Add:
		std::cout << a + b;
		break;

	case Operation::Subtract:
		std::cout << a - b;
		break;

	case Operation::Multiply:
		std::cout << a * b;
		break;

	case Operation::Divide:
		if (b != 0)
			std::cout << a / b;
		else
			std::cout << "Can't divide by zero";
		break;

	default:
		std::cout << "Invalid operation";
		break;
	}

	return 0;
}
