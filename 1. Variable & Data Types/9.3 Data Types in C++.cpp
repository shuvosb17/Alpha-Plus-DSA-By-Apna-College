#include <iostream>   // for input/output
#include <string>     // for string type
using namespace std;

int main() {
    // ---------- Primitive Data Types ----------
    int age = 21;                 // Integer — whole number
    char grade = 'A';             // Character — single letter
    bool isStudent = true;        // Boolean — true or false
    float height = 5.9f;          // Float — small decimal number
    double pi = 3.1415926535;     // Double — high precision decimal

    // ---------- Non-Primitive Data Types ----------
    string name = "Alice";        // String — collection of characters
    int marks[5] = {85, 90, 78, 92, 88};  // Array — collection of same type values

    // ---------- Output Section ----------
    cout << "---- Primitive Data Types ----" << endl;
    cout << "Integer (age): " << age << endl;
    cout << "Character (grade): " << grade << endl;
    cout << "Boolean (isStudent): " << isStudent << endl; // prints 1 for true
    cout << "Float (height): " << height << endl;
    cout << "Double (pi): " << pi << endl;

    cout << "\n---- Non-Primitive Data Types ----" << endl;
    cout << "String (name): " << name << endl;

    cout << "Array (marks): ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
