
#include <iostream>
#include <string>

using namespace std;

// Base Class 1: General details
class Person {
public:
    string name;
    string address;

    void setPerson(string n, string addr) {
        name = n;
        address = addr;
    }
};

// Base Class 2: Employment details
class Employee {
public:
    int empID;
    double salary;

    void setEmployee(int id, double sal) {
        empID = id;
        salary = sal;
    }
};

// Derived Class: Inherits from BOTH Person and Employee
class DisplayInfo : public Person, public Employee {
public:
    void showData() {
        cout << "\n--- Employee Information ---" << endl;
        // Accessing members from Person
        cout << "Name      : " << name << endl;
        cout << "Address   : " << address << endl;
        // Accessing members from Employee
        cout << "ID        : " << empID << endl;
        cout << "Salary    : $" << salary << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    DisplayInfo empObj;
    
    // Setting values using inherited methods
    empObj.setPerson("Rahul Sharma", "123 Tech Park, Bangalore");
    empObj.setEmployee(5001, 75000.50);

    // Calling display method from the derived class
    empObj.showData();

    return 0;
}
