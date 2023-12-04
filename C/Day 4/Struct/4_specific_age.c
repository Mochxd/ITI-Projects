#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
};

// Function to print names of students below a specific age
void print_Names(struct Student students[], int size, int age) {
    printf("Students below %d years old:\n", age);
    for (int i = 0; i < size; ++i) {
        if (students[i].age < age) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to display details of a student based on roll number
void Student_Details(struct Student students[], int size, int specific_RollNo) {
    int found = 0;
    for (int i = 0; i < size; ++i) {
        if (students[i].rollNo == specific_RollNo) {
            printf("Details for Roll No. %d:\n", specific_RollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with Roll No. %d not found.\n", specific_RollNo);
    }
}

int main() {
// Declare varaibles
    int n;

// Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

// Array to store student information
    struct Student students[n];

// Input information for each student
    for (int i = 0; i < n; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        fflush(stdin);
        printf("Name: ");
        gets(students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

// Print names of students below a specific age (e.g., 18)
    int specific_Age = 18;
    print_Names(students, n, specific_Age);

// Display details of a student based on roll number entered by the user
    int specific_RollNo;
    printf("Enter the Roll No. to display details: ");
    scanf("%d", &specific_RollNo);
    Student_Details(students, n, specific_RollNo);

    return 0;
}
