#include <iostream>

using namespace std;

int main() {
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference pointer

    string name = "Jordan";
    int age  = 20;
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    // cout << *pName << " ";
    // cout << pName << endl;

    // cout << *pAge << " ";
    // cout << pAge;

    cout << *pFreePizzas << " ";
    cout << freePizzas;

    return 0;
}