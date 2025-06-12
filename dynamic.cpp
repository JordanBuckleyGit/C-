#include <iostream>

using namespace std;

int main() {

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack.

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    char *pGrades = NULL;
    int size;
    cout << "How many grades to enter in?: " << endl;
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}



    // int *pNum = NULL;
    // pNum = new int;
    // *pNum = 21;

    // cout << "address: " << pNum << endl;
    // cout << "value: " << *pNum << endl;

    // delete pNum;
