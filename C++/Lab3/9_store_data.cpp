#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>

using namespace std;

// Structure to represent student data
struct Student {
    int code;
    string name;
    float gpa;
};

// Function to save student data to a file
void Student_Data(const Student& student, const string& filename) {
    ofstream outFile(filename, ios::app);

    if (!outFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    outFile << student.code << '\t' << student.name << '\t' << student.gpa << endl;

    outFile.close();
}

// Function to read and display student data from the file
void display_Data(const string& filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    Student student;
    string line;

    while (getline(inFile, line)) {
        istringstream iss(line);
        if (iss >> student.code && getline(iss >> ws, student.name, '\t') >> student.gpa) {
            cout << "Code: " << student.code << ", Name: " << student.name << ", GPA: " << student.gpa << endl;
        } else {
            cerr << "Error Getting line: " << line << endl;
        }
    }

    inFile.close();
}
int main() {    

// Sample student data
    Student student1 = {1, "Mohamed Mostafa", 3.96};
    Student student2 = {2, "Aliaa yasser", 2.9};

// Save initial student data to file
    Student_Data(student1, "student_data.txt");
    Student_Data(student2, "student_data.txt");

// Display the initial student data
    cout << "Initial Student Data:" << endl;
    display_Data("student_data.txt");

// Allow user to append new student data
    Student newStudent;
    cout << "Enter new student data (code name gpa): ";
    cin >> newStudent.code >> newStudent.name >> newStudent.gpa;

// Append the new student data to the file
    Student_Data(newStudent, "student_data.txt");

// Display the updated student data
    cout << "\nUpdated Student Data:" << endl;
    display_Data("student_data.txt");

    return 0;
}