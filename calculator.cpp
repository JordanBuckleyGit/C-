#include <iostream>
#include <cmath>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

// Advanced operations
double power(double base, double exp) {
    return std::pow(base, exp);
}

double squareRoot(double num) {
    if (num < 0) {
        std::cerr << "Error: Cannot take square root of negative number." << std::endl;
        return std::numeric_limits<double>::quiet_NaN(); 
    }
    return std::sqrt(num);
}

int factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of negative number is undefined." << std::endl;
        return -1;
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void menu() {
    int num1, num2, result;
    char operation;

    std::cout << "Welcome To The Calculator" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Modulus" << std::endl;
    std::cout << "Enter (1-5) which mode you would like!" << std::endl;
    std::cin >> operation;

    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> num1 >> num2;

    switch (operation) {
        case '1':
            result = add(num1, num2);
            break;
        case '2':
            result = subtract(num1, num2);
            break;
        case '3':
            result = multiply(num1, num2);
            break;
        case '4':
            result = divide(num1, num2);
            break;
        case '5':
            result = modulus(num1, num2);
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
            return;
    }

    std::cout << "Result: " << result << std::endl;
}

int main() {
    menu();
    return 0;
}
