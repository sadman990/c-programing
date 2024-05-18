#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int id;
    float gpa;
};

struct Student students[MAX_STUDENTS];
int num_students = 0;

void addStudent() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", students[num_students].name);
    printf("Enter student ID: ");
    scanf("%d", &students[num_students].id);
    printf("Enter student GPA: ");
    scanf("%f", &students[num_students].gpa);

    num_students++;
    printf("Student added successfully.\n");
}

void deleteStudent() {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < num_students - 1; j++) {
                students[j] = students[j + 1];
            }
            num_students--;
            printf("Student deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

void displayStudents() {
    printf("Student List:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Name: %s, ID: %d, GPA: %.2f\n", students[i].name, students[i].id, students[i].gpa);
    }
}

int main() {
    int choice;

    do {
        printf("\nStudent Database Menu:\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Display Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                displayStudents();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

