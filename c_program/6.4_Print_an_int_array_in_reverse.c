#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=1;i<=n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (i=n;i>0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
