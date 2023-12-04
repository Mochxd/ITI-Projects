#include <stdio.h>
#include <string.h>

struct Student {
    int studentCode;
    char studentName[50];
    char gender;
    int age;
};

void main(void) {

// Create two variables to hold information for two students
    struct Student student1, student2;

// Get the information of first student
    printf("Enter information for Student 1:\n");
    printf("Student Code: ");
    scanf("%d", &student1.studentCode);
    fflush(stdin);
    printf("Student Name: ");
    gets(student1.studentName);
    printf("Gender (M/F): ");
    scanf(" %c", &student1.gender);
    printf("Age: ");
    scanf("%d", &student1.age);

// Get the information of Second student
    printf("\nEnter information for Student 2:\n");
    printf("Student Code: ");
    scanf("%d", &student2.studentCode);
    fflush(stdin);
    printf("Student Name: ");
    gets(student2.studentName);
    printf("Gender (M/F): ");
    scanf(" %c", &student2.gender);
    printf("Age: ");
    scanf("%d", &student2.age);

// Determine the eldest student
    struct Student eldes_tStudent;
    if (student1.age > student2.age) {
        eldes_tStudent = student1;
    } else {
        eldes_tStudent = student2;
    }

// Print information for the eldest student
    printf("\nInformation for the eldest student:\n");
    printf("Student Code: %d\n", eldes_tStudent.studentCode);
    printf("Student Name: %s\n", eldes_tStudent.studentName);
    printf("Gender: %c\n", eldes_tStudent.gender);
    printf("Age: %d\n", eldes_tStudent.age);
}
