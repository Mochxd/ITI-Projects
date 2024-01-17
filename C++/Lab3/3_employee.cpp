#include <iostream>
#include <string>

using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
// Making a Constructor to initialize the object with new values
    Employee(const string& Emp_name, int Emp_ID, double Emp_Salary) : name(Emp_name), employeeID(Emp_ID), salary(Emp_Salary) {}

// Function to display employee information
    void employee_info() {
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }

// Function to calculate and set salary based on performance
    double update_salary(double performance_factor) {
        double update_salary;
        if (performance_factor <= 0){
            return salary;
        }
        salary = salary + salary * performance_factor;
        
    }
};

int main() {
// Creating an Employee object
    Employee employee1("Mohamed Mostafa", 57, 15000);
    Employee employee2("Youssef shawkey", 1, 0);

// Print employee information
    cout << "Before Updating Salary:\n";
    employee1.employee_info();

// Updating salary based on performance 
    employee1.update_salary(.9);

// Print updated information for employee
    cout << "\n";
    cout << "After Updating Salary:\n";
    employee1.employee_info();
    return 0;
}