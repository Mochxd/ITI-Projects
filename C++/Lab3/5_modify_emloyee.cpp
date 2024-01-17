/* The relationship between the Employee class and the Date class can be considered either aggregation or composition,
 depending on how the Date object is managed within the Employee class.
- Aggregation represents a "has-a" relationship, where one class contains another class, but the contained class can exist independently.
- Composition represents a stronger "owns-a" relationship, where one class is a part of another class, and the contained class cannot
exist independently.*/

#include <iostream>
#include <string>

using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
// Constructor for Date class
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

// Function to display date information
    void display_date() {
        cout << "Birthdate: " << day << "/" << month << "/" << year << "\n";
    }
};

class Employee {
private:
    string name;
    int employeeID;
    double salary;
    Date birthdate; // Composition: Employee class contains a Date object

public:
// Constructor to initialize the object with new values, including birthdate
    Employee(const string& Emp_name, int Emp_ID, double Emp_Salary, const Date& Emp_Birthdate)
        : name(Emp_name), employeeID(Emp_ID), salary(Emp_Salary), birthdate(Emp_Birthdate) {}

// Function to display employee information including birthdate
    void employee_info() {
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        birthdate.display_date();
    }

// Function to calculate and set salary based on performance
    void update_salary(double performance_factor) {
        if (performance_factor > 0) {
            salary = salary + salary * performance_factor;
        }
    }
};

int main() {
// Creating an Employee object with birthdate
    Date birthdate1(25, 4, 1998);
    Employee employee1("Mohamed Mostafa", 5, 15000, birthdate1);

// Print employee information
    cout << "Before Updating Salary:\n";
    employee1.employee_info();

// Updating salary based on performance
    employee1.update_salary(0.5);

// Print updated information for employee
    cout << "\nAfter Updating Salary:\n";
    employee1.employee_info();
    return 0;
}