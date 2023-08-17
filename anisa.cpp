#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

void addStudent(string names[], int rollNumbers[], float cgpa[], int& studentCount) {
    if (studentCount < MAX_STUDENTS) {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, names[studentCount]);
        cout << "Enter Roll Number: ";
        cin >> rollNumbers[studentCount];
        cout << "Enter CGPA: ";
        cin >> cgpa[studentCount];
        studentCount++;
    } else {
        cout << "Maximum number of students reached." << endl;
    }
}

void displayAllStudents(const string names[], const int rollNumbers[], const float cgpa[], int studentCount) {
    for (int i = 0; i < studentCount; ++i) {
        cout << "Name: " << names[i] << "\nRoll Number: " << rollNumbers[i] << "\nCGPA: " << cgpa[i] << endl;
    }
}

void searchStudent(const string names[], const int rollNumbers[], const float cgpa[], int studentCount) {
    int rollNumber;
    cout << "Enter Roll Number to search: ";
    cin >> rollNumber;
    bool found = false;
    for (int i = 0; i < studentCount; ++i) {
        if (rollNumbers[i] == rollNumber) {
            cout << "Student Found:\n";
            cout << "Name: " << names[i] << "\nRoll Number: " << rollNumbers[i] << "\nCGPA: " << cgpa[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found." << endl;
    }
}

void saveStudentsToFile(const string names[], const int rollNumbers[], const float cgpa[], int studentCount) {
    ofstream outFile("students.txt");
    for (int i = 0; i < studentCount; ++i) {
        outFile << names[i] << "," << rollNumbers[i] << "," << cgpa[i] << "\n";
    }
    outFile.close();
}

int main() {
    string names[MAX_STUDENTS];
    int rollNumbers[MAX_STUDENTS];
    float cgpa[MAX_STUDENTS];
    int studentCount = 0;

    int choice;
    do {
        cout << "Student Management System\n";
        cout << "1. Add New Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                addStudent(names, rollNumbers, cgpa, studentCount);
                saveStudentsToFile(names, rollNumbers, cgpa, studentCount);
                break;
            }
            case 2: {
                displayAllStudents(names, rollNumbers, cgpa, studentCount);
                break;
            }
            case 3: {
                searchStudent(names, rollNumbers, cgpa, studentCount);
                break;
            }
            case 4: {
                cout << "Exiting...\n";
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
