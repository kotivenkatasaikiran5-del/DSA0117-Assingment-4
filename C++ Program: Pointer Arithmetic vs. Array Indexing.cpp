
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a pointer pointing to the start of the array
    int* ptr = arr; 

    cout << "Address of first element: " << ptr << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Index\tAddress\t\tValue (Indexing)\tValue (Pointer)" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < size; i++) {
        // arr[i] is internally translated to *(arr + i)
        cout << i << "\t" << (ptr + i) << "\t" << arr[i] << "\t\t\t" << *(ptr + i) << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << "\nObservation: Adding 1 to the pointer increases the address by " 
         << sizeof(int) << " bytes (size of int)." << endl;

    return 0;
}
