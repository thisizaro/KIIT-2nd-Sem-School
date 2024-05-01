#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct student
{
    char name[50];
    int roll;
    float marks;
    struct date dob;
};

void stdInput(struct student *s)
{
    char c;
    printf("Enter the name of the student: ");
    scanf("%c%[^\n]s", c, (*s).name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &(*s).roll);
    printf("Enter the marks of the student: ");
    scanf("%f", &(*s).marks);
    printf("Enter the date of birth of the student: ");
    scanf("%d %d %d", &(*s).dob.day, &(*s).dob.month, &(*s).dob.year);
}

void stdOutput(struct student *s, int n)
{
    printf("Student Details. \nName\tRoll\tMarks\tDOB\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%f\t%d/%d/%d\n", s[i].name, s[i].roll, s[i].marks, s[i].dob.day, s[i].dob.month, s[i].dob.year);
    }
}


int main()
{
    printf("Student Details. \nEnter number of students: ");
    int n;
    scanf("%d", &n);
    struct student s[n];

    int high = 0;
    for(int i = 0; i < n; i++)
    {
        stdInput(&s[i]);
        if(s[i].marks > s[high].marks)
        {
            high = i;
        }
    }

    stdOutput(s, n);

    printf("Student with highest marks: \nName\tRoll\tMarks\tDOB\n");
    stdOutput(&s[high], 1);
}