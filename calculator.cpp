#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return a / b;
}

int main() {
    int num1, num2;
    char operator_symbol;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> operator_symbol;

    switch (operator_symbol) {
        case '+':
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            try {
                std::cout << "Result: " << divide(num1, num2) << std::endl;
            } catch (const char* msg) {
                std::cout << msg << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator symbol." << std::endl;
            break;
    }

    return 0;
}