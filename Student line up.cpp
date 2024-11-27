// File Name : Chapter 5 Ex 14 and 25
// Programmer Name : Ebram Azer
// Date: Nov 24
// Requirments : A teacher has asked all her students to line up according to their first name.
//For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
//Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
// Once all the names have been read, it reports which student would be at the front of the line and
//which one would be at the end of the line.You may assume that no two students have the same name.
//Input Validation : Do not accept a number less than 1 or greater than 25 for the number of students.


#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For min_element and max_element

using namespace std;

int main() {
    int numStudents;

    // Prompt the user for the number of students with input validation
    do {
        cout << "Enter the number of students in the class (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Please enter a valid number between 1 and 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    vector<string> students(numStudents);

    // Read student names
    cout << "Please enter the names of the " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> students[i];
    }

    // Find the front and end of the line
    auto frontOfLine = *min_element(students.begin(), students.end());
    auto endOfLine = *max_element(students.begin(), students.end());

    // Report the results
    cout << "\nThe student at the front of the line is: " << frontOfLine << endl;
    cout << "The student at the end of the line is: " << endOfLine << endl;

    return 0;
}
