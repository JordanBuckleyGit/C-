#include <iostream>

using namespace std;

int main() {
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value.
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining a null pointer
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        cout << "Did not assign an address.";
    } else {
        cout << "Address was assigned" << endl;
        cout << *pointer;
    }

    return 0;
}
