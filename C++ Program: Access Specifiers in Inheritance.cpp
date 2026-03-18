
#include <iostream>
#include <string>
using namespace std;

class BaseClass {
public:
    string publicVar = "I am Public (Accessible everywhere)";

protected:
    string protectedVar = "I am Protected (Accessible in Derived Classes)";

private:
    string privateVar = "I am Private (Accessible ONLY in BaseClass)";

public:
    // Helper function to show private access within the same class
    void showPrivate() {
        cout << "BaseClass accessing its own private member: " << privateVar << endl;
    }
};

// Inheriting publicly from BaseClass
class DerivedClass : public BaseClass {
public:
    void accessMembers() {
        cout << "--- Accessing from DerivedClass ---" << endl;
        
        // 1. Public: Accessible
        cout << "Public: " << publicVar << endl;

        // 2. Protected: Accessible in child class
        cout << "Protected: " << protectedVar << endl;

        // 3. Private: NOT Accessible (The line below would cause a compiler error)
        // cout << "Private: " << privateVar << endl; 
        cout << "Private: [HIDDEN] Cannot access privateVar from BaseClass" << endl;
    }
};

int main() {
    BaseClass baseObj;
    DerivedClass derObj;

    cout << "--- Accessing from main() ---" << endl;
    
    // Public is accessible via object
    cout << "Via Base Object: " << baseObj.publicVar << endl;

    // Protected and Private are NOT accessible via object (Compiler Error if uncommented)
    // cout << baseObj.protectedVar; 
    // cout << baseObj.privateVar;

    baseObj.showPrivate();
    cout << endl;

    // Demonstrate derived class access
    derObj.accessMembers();

    return 0;
}
