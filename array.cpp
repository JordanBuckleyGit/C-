#include <iostream>

using namespace std;

// for each loop only allows going forward

int main() {

    return 0;
}

// const parameter useful when referencing so no one can change the value

    // string name = "Jordan";
    // int age = 20;

    // printInfo(name, age);

    // return 0;

// void printInfo(const string name, const int age) {
//     name = " ";
//     age = 0;
//     cout << name << endl;
//     cout << age << endl;
// }

// passing by reference
    // string x = "Kool-Aid";
    // string y = "Water";
    // string temp;

    // swap(x, y);

    // cout << "X: " << x << endl;
    // cout << "Y: " << y << endl;

// void swap(string &x, string &y) {
//     string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// memory addresses
    // string name = "Jordan";
    // int age = 20;
    // bool student = true;
    // cout << &name << endl;
    // cout << &age << endl;
    // cout << &student << endl;


    // string questions[] = {"1. What year was C++ created?: ",
    //                        "2. Who invented C++?: ",
    //                         "3. What is the predecessor?: ",
    //                          "4. Is the earth flat?: "};

    // string options[][4] = {
    //                        {"A. 1969","B. 1975","C. 1985","D. 1989"},
    //                        {"A. Guido","B. Bjarne","C. John","D. Mark"},
    //                        {"A. C","B. C+", "C. Java", "D. Python"},
    //                        {"A. Yes","B. No","C. Sometimes", "D. What's Earth?"}
    //                       };

    // char answerKey[] = {'C','B','A','D'};

    // int size = sizeof(questions) / sizeof(questions[0]);
    // char guess;
    // int score;

    // for (int i = 0; i < size; i++) {
    //     cout << "*******************\n";
    //     cout << questions[i] << endl;
    //     cout << "*******************\n";

    //     for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
    //         cout << options[i][j] << endl;
    //     }
    //     cin >> guess;
    //     guess = toupper(guess);

    //     if (guess == answerKey[i]) {
    //         cout << "Correct!" << endl;
    //         score ++;
    //     } else {
    //         cout << "Wrong!" << endl;
    //         cout << "Answer: " << answerKey[i] << endl;
    //     }
    // }
    // cout << "*******************\n";
    // cout << "Results!"<< endl;
    // cout << "*******************\n";
    // cout << "Correct guesses: " << score << endl;
    // cout << "# of Questions: " << size << endl;
    // cout << "Score: " << (score/(double)size)*100 << "%" << endl;
    // return 0;


    // iterating over a 2d array (matrix)
    // string cars[][3] = {
    //                    {"Mustang","Escape","F-150"},
    //                    {"Corvette","Equinox","Silverado"},
    //                    {"Challenger","Durango","Ram 1500"}
    //                 };
    // int rows = sizeof(cars) / sizeof(cars[0]);
    // int cols = sizeof(cars[0]) / sizeof(cars[0][0]);

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout << cars[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// fill function
    // const int SIZE = 100;
    // string foods[SIZE];

    // fill(foods, foods + SIZE / 2,"pizza");
    // fill(foods + SIZE/2, foods + SIZE, "hamburgers");
    
    // for (string food : foods) {
    //     cout << food << endl;
    // }

    // return 0;


// bubble sort
// void sort(int array[], int size);


// int main() {
//     int array[] = {10,1,9,2,8,3,7,4,6,5};
//     int size = sizeof(array) / sizeof(array[0]);

//     sort(array, size);

//     for (int element : array) {
//         cout << element << " ";
//     }

//     return 0;
// }

// void sort(int array[], int size) {
//     int temp;

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (array[j] > array[j+1]){
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }


// }

// linear search
// int searchArray(int array[], int size, int element);

// int main() {
//     int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int index;
//     int myNum;

//     cout << "Enter element to search for: " << endl;
//     cin >> myNum;

//     index = searchArray(numbers,size,myNum);

//     if (index != -1) {
//         cout << myNum << " is at index: " << index;
//     } else {
//         cout << myNum << " is not in the array"; 
//     }

//     return 0;
// }

// int searchArray(int array[], int size, int element) {
//     for(int i = 0; i < size; i++) {
//         if (array[i] == element) {
//             return i;
//         }
//     }
//     return -1;
// }

    // double prices[] = {49.99, 15.05, 75, 9.99};
    // int size = sizeof(prices) / sizeof(prices[0]);
    // double total = getTotal(prices, size);
    // cout << "$" << total;

// double getTotal(double prices[], int size) {
//     double total = 0;
//     for (int i = 0; i < size; i++) {
//         total += prices[i];
//     }
//     return total;
// }


    // string students[] = {"John","Mary","Sean"};
    // int grades[] = {65,72,81,93};

    // for (string student : students ) {
    //     cout << student << endl;
    // }

    // for (int grade : grades) {
    //     cout << grade << endl;
    // }
    // return 0;
// cout << sizeof(students)/sizeof(string) << " elements";
// string name = "Jordan";
// double gpa = 4.0;
// char grade = 'F';
// bool student = true;
// char grades[] = {'A','B','C','D','E','F'};
// string students[] = {"Spongebob","Patrick","Squidward"};


    // string students[] = {"John","Mary","Tom"};
    // for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
    //     cout << students[i] << endl;
    // }

    // char grades[] = {'A','B','C','D','F'};
    // for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
    //     cout << grades[i] << endl;
    // }