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
    void display_date() const {
        cout << "Birthdate: " << day << "/" << month << "/" << year << "\n";
    }
};

class Employee {
private:
    string name;
    int employeeID;
    double salary;
    Date birthdate;

public:
// Constructor to initialize the object with new values, including birthdate
    Employee(const string& Emp_name = "", int Emp_ID = 0, double Emp_Salary = 0, const Date& Emp_Birthdate = Date(0, 0, 0))
        : name(Emp_name), employeeID(Emp_ID), salary(Emp_Salary), birthdate(Emp_Birthdate) {}

// Function to display employee information including birthdate
    void employee_info() const {
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        birthdate.display_date();
    }

// Function to get salary
    double get_salary() const {
        return salary;
    }
};

class EmployeeList {
private:
    static const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees;

public:
    EmployeeList() : numEmployees(0), employees{} {}

// function to add emloyee
    void add_employee(const string& emp_name, int emp_ID, double emp_Salary, const Date& emp_Birthdate) {
        if (numEmployees < MAX_EMPLOYEES) {
            employees[numEmployees++] = Employee(emp_name, emp_ID, emp_Salary, emp_Birthdate);
        } else {
            cout << "Employee list is full. Cannot add more employees.\n";
        }
    }
// function to remove emloyee
    void remove_employee(int employeeID) {
        for (int i = 0; i < numEmployees; ++i) {
            if (employees[i].get_salary() == employeeID) {
                for (int j = i; j < numEmployees - 1; ++j) {
                    employees[j] = employees[j + 1];
                }
                --numEmployees;
                return;
            }
        }
        cout << "Employee with ID " << employeeID << " not found.\n";
    }
// function to sort based on salary
    void sort_by_salary() {
        for (int i = 0; i < numEmployees - 1; ++i) {
            for (int j = 0; j < numEmployees - i - 1; ++j) {
                if (employees[j].get_salary() > employees[j + 1].get_salary()) {
                    swap(employees[j], employees[j + 1]);
                }
            }
        }
    }
// function to Display the emloyee information
    void display_employees() const {
        for (int i = 0; i < numEmployees; ++i) {
            employees[i].employee_info();
            cout << "------------------------\n";
        }
    }
};

int main() {
    Date birthdate1(25, 4, 1998);
    Date birthdate2(12, 8, 1990);

    EmployeeList employeeList;
    employeeList.add_employee("Mohamed Mostafa", 5, 15000, birthdate1);
    employeeList.add_employee("Ali Ahmed", 8, 18000, birthdate2);

    cout << "Before Sorting:\n";
    employeeList.display_employees();

// Updating salary based on performance
    employeeList.sort_by_salary();

    cout << "\nAfter Sorting by Salary:\n";
    employeeList.display_employees();

    return 0;
}
