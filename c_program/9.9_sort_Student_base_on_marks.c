#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[20];
    int marks[3];
    int total_marks;
} student;

int main()
{

    int num, a;
    char b[20];

    scanf("%d", &num);
    printf("%d\n", num);
    student stud[num];
    for (int i = 0; i < num; i++)
    {
        stud[i].total_marks = 0;
        scanf("%d", &stud[i].id);
        scanf("%s", stud[i].name);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &stud[i].marks[j]);
            stud[i].total_marks += stud[i].marks[j];
        }
    }
    for (int i = 0; i < num; ++i)
    {
        for (int j = i + 1; j < num; ++j)
        {
            if (stud[i].total_marks > stud[j].total_marks)
            {

                a = stud[i].total_marks;
                stud[i].total_marks = stud[j].total_marks;
                stud[j].total_marks = a;

                strcpy(b, stud[i].name);
                strcpy(stud[i].name, stud[j].name);
                strcpy(stud[j].name, b);

                a = stud[i].id;
                stud[i].id = stud[j].id;
                stud[j].id = a;
            }
        }
    }
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%s ", stud[i].name);
        printf("%d ", stud[i].id);
        printf("%d\n", stud[i].total_marks);
    }
    return 0;
}

