#include <iostream>

int main() {
    double firstNumber = 0;
    double secondNumber = 0;
    char operation = '\0';

    std::cout << "Simple C++ Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    switch (operation) {
        case '+':
            std::cout << "Result: " << (firstNumber + secondNumber) << "\n";
            break;
        case '-':
            std::cout << "Result: " << (firstNumber - secondNumber) << "\n";
            break;
        case '*':
            std::cout << "Result: " << (firstNumber * secondNumber) << "\n";
            break;
        case '/':
            if (secondNumber == 0) {
                std::cout << "Error: Division by zero is not allowed.\n";
            } else {
                std::cout << "Result: " << (firstNumber / secondNumber) << "\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator.\n";
            break;
    }

    return 0;
}
