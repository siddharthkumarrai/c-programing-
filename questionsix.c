#include <stdio.h>
#include <string.h>

// Structure to represent student details
struct student
{
    char name[30];
    int rollno;
    int mathMarks;
    int scienceMarks;
    int englishMarks;
    int computerMarks;
    int totalMarks;
    float percentage;
    char grade;
};

// Function to calculate total marks, percentage and grade for each student
void calculateGrade(struct student *student)
{
    student->totalMarks = student->mathMarks + student->scienceMarks + student->englishMarks + student->computerMarks;
    student->percentage = student->totalMarks / 4.0;
    if (student->percentage >= 90)
    {
        student->grade = 'A';
    }
    else if (student->percentage >= 80)
    {
        student->grade = 'B';
    }
    else if (student->percentage >= 70)
    {
        student->grade = 'C';
    }
    else if (student->percentage >= 60)
    {
        student->grade = 'D';
    }
    else if (student->percentage >= 50)
    {
        student->grade = 'E';
    }
    else
    {
        student->grade = 'F';
    }
}

int main()
{
    // Assuming we have 10 students
    const int numStudent = 10;
    // Array of structures to store student information
    struct student students[numStudent];

    // Input details for each student
    for (int i = 0; i < numStudent; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%29s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter marks in Maths: ");
        scanf("%d", &students[i].mathMarks);
        printf("Enter marks in Science: ");
        scanf("%d", &students[i].scienceMarks);
        printf("Enter marks in English: ");
        scanf("%d", &students[i].englishMarks);
        printf("Enter marks in Computer: ");
        scanf("%d", &students[i].computerMarks);

        // Calculate total marks, percentage, and grade
        calculateGrade(&students[i]);
    }

    // Display mark-sheet and grade card for each student
    printf("\n\n------Mark-Sheet and Grade Card----\n");
    for (int i = 0; i < numStudent; i++)
    {
        printf("\n\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Marks in Maths: %d\n", students[i].mathMarks);
        printf("Marks in Science: %d\n", students[i].scienceMarks);
        printf("Marks in English: %d\n", students[i].englishMarks);
        printf("Marks in Computer: %d\n", students[i].computerMarks);
        printf("Total Marks: %d\n", students[i].totalMarks);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Grade: %c\n", students[i].grade);
    }

    return 0;
}