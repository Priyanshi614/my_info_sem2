#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int c,d,m,n,p,q,k,total = 0;
    int fst[10][10],sec[10][10],mul[10][10];
    scanf("%d\t%d",&m,&n);
    scanf("%d\t%d",&p,&q);
    
    if(n !=p)
    {
        printf("MULTIPLICATION NOT POSSIBLE\n");
    }
    else{
        printf("%d\t%d\n",m,q);
        for(c=0;c<m;c++)
        {
            
            for (d=0;d<n;d++)
                scanf("%d",&fst[c][d]);
        }
        for(c=0;c<p;c++)
        {
            for (d=0;d<q;d++)
                scanf ("%d",&sec[c][d]);
        }
            for(c=0;c<m;c++)
            {
                for(d=0;d<q;d++)
                {
                    for(k=0;k<p;k++)
                    {
                        total=total+fst[c][k]*sec[k][d];
                    }
                    mul[c][d] =total;
                    total = 0;
                }
            }
            for(c=0;c<m;c++)
            {
                for(d=0;d<q;d++)
                    printf("%d\t",mul[c][d]);
                printf("\n");
            }
        
    }
    return 0;
}
