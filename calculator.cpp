#include <iostream>
#include <cmath>
#include <limits>

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
        return std::numeric_limits<double>::quiet_NaN(); // Return NaN
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

// Menu
void menu() {
    int choice;
    double num1, num2, result;

    do {
        std::cout << "\nWelcome To The Calculator" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Modulus" << std::endl;
        std::cout << "6. Power" << std::endl;
        std::cout << "7. Square Root" << std::endl;
        std::cout << "8. Factorial" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice (0-8): ";
        std::cin >> choice;

        switch (choice) {
            case 1: // Addition
            case 2: // Subtraction
            case 3: // Multiplication
            case 4: // Division
            case 5: // Modulus
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                break;
            case 6: // Power
                std::cout << "Enter base and exponent: ";
                std::cin >> num1 >> num2;
                result = power(num1, num2);
                std::cout << "Result: " << result << std::endl;
                continue;
            case 7: // Square Root
                std::cout << "Enter a number: ";
                std::cin >> num1;
                result = squareRoot(num1);
                std::cout << "Result: " << result << std::endl;
                continue;
            case 8: // Factorial
                std::cout << "Enter a number: ";
                std::cin >> num1;
                result = factorial(static_cast<int>(num1));
                if (result != -1) std::cout << "Result: " << result << std::endl;
                continue;
            case 0: // Exit
                std::cout << "Exiting..." << std::endl;
                return;
            default:
                std::cout << "Invalid choice!" << std::endl;
                continue;
        }

        // Perform selected operation
        switch (choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
            case 5:
                result = modulus(static_cast<int>(num1), static_cast<int>(num2));
                break;
        }

        std::cout << "Result: " << result << std::endl;
    } while (choice != 0);
}

int main() {
    menu();
    return 0;
}
