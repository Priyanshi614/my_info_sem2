#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int ID;
    float experience;
    float salary;
}person;

int main() {
    int n,m = 0;
    scanf("%d",&n);
    person p[n];
    for(int i=0;i<n;i++)
        scanf("%s %d %f %f\n",p[i].name,&p[i].ID,&p[i].experience,&p[i].salary);
    
    for(int i=0;i<n;i++)
    {
        if(p[i].salary<50000 && p[i].experience>=7)
        {
            m++;
        }
    }
    printf("%d\n",m);
    for(int i=0;i<n;i++)
    {
        if(p[i].salary<50000 && p[i].experience>=7)
        {
            printf("%d %s\n",p[i].ID,p[i].name);
        }
    }
    
    
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
