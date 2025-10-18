#include <iostream>
using namespace std;

int main() {
    // ✅ Valid identifiers
    int myName = 10;
    int _marks = 95;
    int TotalMarks = 480;
    int student_1 = 23;

    // ❌ Invalid identifiers (these lines will cause compile errors if uncommented)
    // int 1student = 5;       // ❌ Cannot start with a digit
    // int Avg Score = 88;     // ❌ Contains a space
    // int full&name = 7;      // ❌ Contains '&' (special character)

    // Display valid identifier values
    cout << "Valid Identifiers and Their Values:" << endl;
    cout << "myName: " << myName << endl;
    cout << "_marks: " << _marks << endl;
    cout << "TotalMarks: " << TotalMarks << endl;
    cout << "student_1: " << student_1 << endl;

    // Explanation for invalid identifiers
    cout << "\nInvalid Identifiers Explanation:" << endl;
    cout << "1student -> ❌ Starts with a digit" << endl;
    cout << "Avg Score -> ❌ Contains a space" << endl;
    cout << "full&name -> ❌ Contains special character '&'" << endl;

    return 0;
}
