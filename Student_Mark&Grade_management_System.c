#include <stdio.h>

// Function declarations
void inputMarks(float marks[], char subjectsName[][20], int subjects);
float calculateTotal(float marks[], int subjects);
float calculateAverage(float total, int subjects);
char calculateGrade(float average);

int main() {
    float marks[5];
    int subjects = 5;
    char subjectsName[][20] = {"Maths", "Science", "English", "History", "Geography"};

    // Input marks for each subject
    inputMarks(marks, subjectsName, subjects);

    // Calculate total, average, and grade
    float total = calculateTotal(marks, subjects);
    float average = calculateAverage(total, subjects);
    char grade = calculateGrade(average);

    // Display results
    printf("\nResults:\n");
    printf("--------\n");
    for (int i = 0; i < subjects; i++) {
        printf("%s: %.2f\n", subjectsName[i], marks[i]);
    }
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

// Function to input marks for each subject
void inputMarks(float marks[], char subjectsName[][20], int subjects) {
    for (int i = 0; i < subjects; i++) {
        printf("Enter marks for %s: ", subjectsName[i]);
        scanf("%f", &marks[i]);
    }
}

// Function to calculate total marks
float calculateTotal(float marks[], int subjects) {
    float total = 0;
    for (int i = 0; i < subjects; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculateAverage(float total, int subjects) {
    return total / subjects;
}

// Function to calculate grade based on average marks
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}
