#include <stdio.h>

int main() {
    float m,p,l,t;
    int  n;
    scanf("%f",&m);
    scanf("%f",&p);
    scanf("%f",&l);
    scanf("%d",&n);
    scanf("%f",&t);
    int e;
    e = (t*n)-(p*l/m);
    printf("%d",e);

    /* Enter your code here. */    
    return 0;
}