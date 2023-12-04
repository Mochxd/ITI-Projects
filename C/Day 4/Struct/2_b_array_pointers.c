#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char id_num[5];
    char name[10];
    char gender;
    int age;
};

void swapStudents(struct Student **a, struct Student **b);
void sortStudentsByName(struct Student **students, int numStudents);
int main() {

// Declare varaibles
    int numStudents;

// Get number of students from the user
    printf("Enter the number of students (up to 100): ");
    scanf("%d", &numStudents);

// check if the user input more than 100 students
    if (numStudents > 100) {
        printf("Error: Maximum number of students is 100.\n");
        return 1;
    }

// Allocate memory for an array of pointers to struct Student.
    struct Student **students = (struct Student **)malloc(numStudents * sizeof(struct Student *));

// check if the memory allocation is done correctly
    if (students == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }

    printf("Enter information for each student:\n");
    for (int i = 0; i < numStudents; i++) {
        students[i] = (struct Student *)malloc(sizeof(struct Student));

        printf("Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%s", students[i]->id_num);
        printf("Name: ");
        fflush(stdin);
        gets(students[i]->name);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i]->gender);
        printf("Age: ");
        scanf("%d", &students[i]->age);
    }

// making a function to make sorting
    sortStudentsByName(students, numStudents);
    printf("\nSorted student ingormation :\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %s, Name: %s, Gender: %c, Age: %d\n",
               students[i]->id_num, students[i]->name, students[i]->gender, students[i]->age);
    }

// Calculate memory used for 20 students
    int memoryUsedFor20Students = 0;
    for (int i = 0; i < 20; i++) {
        memoryUsedFor20Students += sizeof(struct Student);
    }
    printf("\nMemory used for information of 20 students: %d bytes\n", memoryUsedFor20Students);

// Free allocated memory
    for (int i = 0; i < numStudents; i++) {
        free(students[i]);
    }
    free(students);

    return 0;
}
// function to swap students
void swapStudents(struct Student **a, struct Student **b) {
    struct Student *temp = *a;
    *a = *b;
    *b = temp;
}

// function to sorting the students based on name
void sortStudentsByName(struct Student **students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (strcmp(students[j]->name, students[j + 1]->name) > 0) {
                swapStudents(&students[j], &students[j + 1]);
            }
        }
    }
}
