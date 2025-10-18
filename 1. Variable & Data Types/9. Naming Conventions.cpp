#include <iostream>
using namespace std;

int main() {
    // ✅ Good naming conventions
    int studentAge = 20;        // camelCase: first word lowercase, next word capitalized
    float averageScore = 85.5;  // descriptive and clear
    char gradeLetter = 'A';     // meaningful variable name
    bool isRegistered = true;   // prefix 'is' for boolean variables

    // ❌ Bad naming conventions (avoid these)
    int a = 20;                 // not descriptive
    float avg = 85.5;           // too short, unclear meaning
    char g = 'A';               // single letters are confusing
    bool x = true;              // meaningless name

    cout << "Good Example Variables:" << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Grade Letter: " << gradeLetter << endl;
    cout << "Is Registered: " << isRegistered << endl;

    return 0;
}
