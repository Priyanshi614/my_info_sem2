#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n,x,y,i,j;
    scanf("%d\t",&m);
    scanf("%d\n",&n);
    scanf("%d\t",&x);
    scanf("%d\n",&y);
    int num1[m][n],num2[x][y];
    if (m==x && n==y)
    {
        printf("%d\t",m);
        printf("%d\n",n);
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d\t",&num1[i][j]);
            }
            
        }
        /*
        for (i=1;i<=m;i++)
        {
            for (j=1;j<=n;j++)
            {
                printf("%d\t",&num1[i][j]);
            }
            
        }
        */
        for (i=0;i<x;i++)
        {
            for (j=0;j<y;j++)
            {
                scanf("%d\t",&num2[i][j]);
            }
           
        }
         /*for (i=1;i<=x;i++)
        {
            for (j=1;j<=y;j++)
            {
                printf("%d\t",num2[i][j]);
            }
           
        }*/
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d\t",num1[i][j]+num2[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("ADDITION NOT POSSIBLE");
    
    return 0;
}
