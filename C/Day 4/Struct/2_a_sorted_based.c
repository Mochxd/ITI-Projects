#include <stdio.h>
#include <string.h>

struct Student {
    char id_num[5];
    char name[10];
    char gender;
    int age;
};

void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudentsByName(struct Student *students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {

    struct Student students[100];
    int numStudents;

// Input information for students
    printf("Enter the number of students (up to 100): ");
    scanf("%d", &numStudents);

    if (numStudents > 100) {
        printf("Error: Maximum number of students is 100.\n");
        return 1;
    }

    printf("Enter information for each student:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", students[i].id_num);
        printf("Name: ");
        fflush(stdin);
        gets(students[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

// Sort students based on name
    sortStudentsByName(students, numStudents);

// Print the sorted student information
    printf("\nSorted student information based on name:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %s, Name: %s, Gender: %c, Age: %d\n",
               students[i].id_num, students[i].name, students[i].gender, students[i].age);
    }

    // b) Using array of pointers to struct
    struct Student *studentPointers[100];

    // Assign pointers to the structures
    for (int i = 0; i < 100; i++) {
        studentPointers[i] = &students[i];
    }

    // Calculate memory used for 20 students
    int memoryUsed = sizeof(struct Student) * 20;
    printf("\nMemory used to store information for 20 students: %d bytes\n", memoryUsed);

    return 0;
}
