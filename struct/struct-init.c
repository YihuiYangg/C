#include <stdio.h>

struct student
{
    char name[20];
    char student_id[11];
    unsigned mark;
};


int main()
{
    struct student new_student={"Name Surname","28932123",35};

    printf("student name:%s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);
    return 0;
}