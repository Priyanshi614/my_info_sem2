#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int marks;
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
        printf("AA");
     if (marks>=80 && marks<90)
        printf("AB");
     if (marks>=70 && marks<80)
        printf("BB");
     if (marks>=60 && marks<70)
        printf("BC");
     if (marks>=50 && marks<60)
        printf("CC");
     if (marks>=40 && marks<50)
        printf("CD");
     if (marks<40 )
        printf("DD");
    return 0;
}