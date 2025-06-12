#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;



int main() {


    return 0;
}

    // double balance;
    // int choice;
    
    // do {
    //     cout << "***************" << endl;
    //     cout << "Enter your choice:" << endl;
    //     cout << "***************" << endl;
    //     cout << "1. Show Balance" << endl;
    //     cout << "2. Deposit Money" << endl;
    //     cout << "3. Withdraw Money" << endl;
    //     cout << "4. Exit" << endl;
    //     cin >> choice;
    //     cin.clear();
    //     fflush(stdin);

    //     switch (choice) {
    //         case 1: showBalance(balance);
    //             break;
    //         case 2: balance += deposit();
    //             showBalance(balance);
    //             break;
    //         case 3: balance -= withdraw(balance);
    //             showBalance(balance);
    //             break;
    //         case 4: cout << "Thanks for visiting!" << endl;
    //             break;
    //         default: cout << "Invalid Choice" << endl;
    //     }
    // } while(choice != 4);
// void showBalance(double balance){
//     cout << "Your balance: $" << std::setprecision(2) << std::fixed << balance << endl;
// }
// double deposit(){
//     double amount;
//     cout << "Enter amount to be deposited: ";
//     cin >> amount;
//     if (amount < 0) {
//         cout << "Can't deposit a negative amount!";
//         return 0;
//     }
//     return amount;
// }
// double withdraw(double balance){
//     double amount;
//     cout << "Enter amount to be withdrawn: " << endl;
//     cin >> amount;
//     if (amount > balance) {
//         cout << "Insufficient Funds!" << endl;
//         return 0;
//     } else if (amount < 0) {
//         cout << "Thats not a valid amount!" << endl;
//         return 0;
//     }
//     return amount;
// }

// void bakePizza() {
//     cout << "Here is your pizza!" << endl;

// }
// void bakePizza(std::string topping1) {
//     cout << "Here is your "<< topping1 << endl;
// }
// void bakePizza(std::string topping1, std::string topping2) {
//     cout << "Here is your " << topping1 << " and " <<  topping2 << endl;
// }

// std::string firstName = "Jordan";
// std::string lastName = "Buckley";
// std::string fullName = concatStrings(firstName, lastName);
// cout << "Full Name: " << fullName << std::endl;
    
// std::string concatStrings(std::string str1, std::string str2) {
//     return str1 + " " + str2;
// }

// double length = 5.0;
// double area = square(length);
// double volume = cube(length);
// cout << "The area of the square is: " << area << endl;
// cout << "The volume of the cube is: " << volume << endl;

// double square(double length) {
//     return length * length;
// }
// double cube(double length) {
//     return length * length * length;
// }

    // int a = 1;
    // int b = 2;
    // a = b;
    // swapping variables

    // const double pi = 3.14159;
    // pi = 3.14; // Error: cannot modify a const variable
    // using const

    // int x = 10;
    // for (int i = 0; i < 5; ++i) {
    //     x += i;
    // }

    // cout << "Enter a value:";
    // int value;
    // cin >> value;
    // cout << "The value is: " << value << std:: endl;
    // return 0;

    // double result = floor(1.5);
    // double result2 = ceil(1.5);
    // cout << result << endl
    //         << result2 << endl;

    // cout << "Enter radius of a circle: " << endl;
    // double radius;
    // cin >> radius;
    // double area = pow(radius, 2) * M_PI;
    // cout << "Area of the circle is: " << area << endl;
    // return 0;

    // int number = 1000000;
    // short another{number};
    // cout << "The value of another is: " << another << endl;

    // long elapseSecond = time(nullptr);
    // srand(elapseSecond);
    // int number = rand() % 10;
    // cout << number << endl;

// std::string name = "Jordan";
// int age = 20;
// happyBirthday(name,age); // passing argument

// void happyBirthday(std::string name, int age) {
//     cout << "Happy Birthday to "<< name << " you are " << age << endl;
// }