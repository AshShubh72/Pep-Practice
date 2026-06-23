#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent";

        case 'B':
            cout << "Very Good";

        case 'C':
            cout << "Good";

        case 'D':
            cout << "Average";

        case 'F':
            cout << "Fail";

        default:
            cout << "Invalid Grade";
    }

    return 0;
}