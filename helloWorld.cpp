#include <iostream>
#include <vector>
#include <cmath>

// typedef std::vector<std::pair<std::string,int>> pairList_t;
// typedef std::string text_t;
// typedef int number_t;
// same as above
// using text_t = std::string;
// using number_t = int;

int main() {


}

    // srand(time(nullptr));
    // int num = rand() % 6;
    // int guess;
    // int tries;

    // do {
    //     std::cout << "Guess a number between 0 and 5: ";
    //     std:: cin >> guess;
    //     tries++;
    //     if (guess > num) {
    //         std::cout << "Too high!" << std::endl;
    //     } else if (guess < num) {
    //         std::cout << "Too low!" << std::endl;
    //     } else {
    //         std::cout << "You guessed it in " << tries << " tries!" << std::endl;
    //     }
    // } while (guess != num);

    // return 0;

    // int num;
    // do {
    //     std::cout << "Enter a number (0 to exit): ";
    //     std::cin >> num;

    //     if (num != 0) {
    //         std::cout << "You entered: " << num << std::endl;
    //     }
    // } while (num != 0);

    // ternary operator
    // int grade = 75;
    // grade >= 60 ? std::cout << "You passed!" : std::cout << "You failed!";
    // int number = 9;
    // number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";
    // bool hungry = true;
    // hungry ? std::cout << "Eat something!" : std::cout << "Do not eat anything!";

    // char op;
    // double num1, num2;
    // double result;
    // std::cout << "********** Calculator **********" << std::endl;
    // std::cout << "Enter operator (+, -, *, /): ";
    // std::cin >> op;
    // std::cout << "Enter #1: ";
    // std::cin >> num1;
    // std::cout << "Enter #2: ";
    // std::cin >> num2;

    // switch (op) { 
    //     case '+':
    //         result = num1 + num2;
    //         std::cout << result;
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         std::cout << result;
    //         break;
    //     case '*':
    //         result = num1 * num2;
    //         std::cout << result;
    //         break;
    //     case '/':
    //         if (num2 != 0) {
    //             result = num1 / num2;
    //             std::cout << result;
    //         } else {
    //             std::cout << "Error: Division by zero!" << std::endl;
    //         }
    //         break;
    //     default:
    //         std::cout << "Error: Invalid operator!" << std::endl;
    //         break;
    // }


    // int age;
    // std::cout << "Enter your age: ";
    // std::cin >> age;

    // if (age >= 18) {
    //     std::cout << "You can come in!";
    // } else if (age < 0) {
    //     std::cout << "You are not alive!";
    // } else {
    //     std::cout << "You cannot come in!";
    // }

//     switch (age){
//         case 1:
//             std::cout << "You are 1 year old!";
//             break;
//         case 2:
//             std::cout << "You are 2 years old!";
//             break;
//         case 3:
//             std::cout << "You are 3 years old!";
//             break;
//         default:
//             std::cout << "You are not 1, 2, or 3 years old!";
//             break;
//     } 
// }

// using namespace std;

// namespace first {
//     int x = 1;
// }


// namespace second {
//     int x = 2;
// }

// int main() {
//     using namespace second;

//     cout << x << endl;
//     return 0;
// }

// :: scope resolution operator
// :: is used to define the scope of a variable or function
