#include <iostream>
using namespace std;

int main() {
    int a = 10;      // Normal variable
    int *p = &a;     // Pointer stores address of a

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;

    cout << "Value stored in p = " << p << endl;   // Address of a
    cout << "Value pointed by p = " << *p << endl; // Value at that address

    return 0;
}