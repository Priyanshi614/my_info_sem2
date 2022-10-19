#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m,n,i,j;
    scanf("%d\t",&m);
    scanf("%d\n",&n);
    printf("%d\t",n);
    printf("%d\n",m);
    int num1[m][n];
    
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d\t",num1[j][i]);
        }
        printf("\n");
    }
    
    
    return 0;
}
