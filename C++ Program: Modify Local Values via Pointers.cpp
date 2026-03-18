
#include <iostream>
using namespace std;

// Function that takes pointers as parameters
void modifyValues(int* ptrA, double* ptrB) {
    // Check if pointers are not null
    if (ptrA != nullptr && ptrB != nullptr) {
        // Dereference the pointers to change the values in main()
        *ptrA = 100;
        *ptrB = 99.99;
        cout << "Values modified inside modifyValues()." << endl;
    }
}

int main() {
    // Local variables defined in main()
    int num = 10;
    double price = 12.50;

    cout << "Original Values in main():" << endl;
    cout << "num = " << num << ", price = " << price << endl;
    cout << "-----------------------------------" << endl;

    // Pass the addresses of the local variables to the function
    modifyValues(&num, &price);

    cout << "-----------------------------------" << endl;
    cout << "Modified Values in main() after function call:" << endl;
    cout << "num = " << num << ", price = " << price << endl;

    return 0;
}
