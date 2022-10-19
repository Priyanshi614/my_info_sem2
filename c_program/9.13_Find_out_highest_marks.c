#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student
{
    int r_no;
    int marks;
    char dept[3];
};

int main()
{
    int n, j = 0, k = 0, l = 0, max = 0;
    scanf("%d", &n);

    int arrc[20], arre[20], arri[20];
    struct student *ptr;
    ptr = (struct student *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(ptr + i)->r_no);
        scanf("%d", &(ptr + i)->marks);
        scanf("%s", (ptr + i)->dept);
    }

    for (int i = 0; i < n; i++)
    {
        if (!(strcmp((ptr + i)->dept, "CE")))
        {

            arrc[j] = i;
            j++;
        }
        if (!(strcmp((ptr + i)->dept, "EC")))
        {

            arre[k] = i;
            k++;
        }
        if (!(strcmp((ptr + i)->dept, "IT")))
        {

            arri[l] = i;
            l++;
        }
        if (max < ((ptr + i)->marks))
            max = (ptr + i)->marks;
    }
    printf("%d\n", max);

    if (j == 0)
    {
        printf("0\tCE\n");
    }else
    {
        for (int i = 0; i < j; i++)
        {
            if (((ptr + (arrc[0]))->marks) < ((ptr + (arrc[i]))->marks))
                (ptr + (arrc[0]))->marks = (ptr + (arrc[i]))->marks;
        }

        printf("%d\t", (ptr + (arrc[0]))->marks);
        printf("CE\n");
    }

    if (k == 0)
    {
        printf("0\tEC\n");
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (((ptr + (arre[0]))->marks) < ((ptr + (arre[i]))->marks))
                (ptr + (arre[0]))->marks = (ptr + (arre[i]))->marks;
        }

        printf("%d\t", (ptr + (arre[0]))->marks);
        printf("EC\n");
    }

    if (l == 0)
    {
        printf("0\tIT\n");
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (((ptr + (arri[0]))->marks) < ((ptr + (arri[i]))->marks))
                (ptr + (arri[0]))->marks = (ptr + (arri[i]))->marks;
        }

        printf("%d\t", (ptr + (arri[0]))->marks);
        printf("IT\n");
    }

    return 0;
}
