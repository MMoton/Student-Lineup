/*
Code File Name: Chapter5Exercise4.cpp
Programmer: Maya Moton
Due Date: 04/26/2026
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    int numStudents;
    string name;
    string lineLeader;
    string endOfTheLine;

// number of students
    do {
        cout << "Enter number of students (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Invalid number. Try again.\n";
        }

    } while (numStudents < 1 || numStudents > 25);

    // Read first name
    cout << "Enter student name: ";
    cin >> name;
    lineLeader = name;
    endOfTheLine = name;

    for (int i = 1; i < numStudents; i++) {
        
        cout << "Enter student name: ";
        cin >> name;
        if (name < lineLeader) {
            lineLeader = name;
        }
        if (name > endOfTheLine){
            endOfTheLine = name;
        }
    }

    // results
    cout << "\nFront of the line: " << lineLeader << endl;
    cout << "End of the line: " << endOfTheLine << endl;

    return 0;
}
