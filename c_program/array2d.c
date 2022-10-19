#include<stdio.h>
int main() {
	int i,j,x[3][3],y[3][3],result[3][3];
	for (i=0;i<3;i++)
		for(j=0;j<3;j++)
				scanf("%d",&x[i][j]);
	for (i=0;i<3;i++)
		for(j=0;j<3;j++)
				scanf("%d",&y[i][j]);
	
	for (i=0;i<3;i++)
		for(j=0;j<3;j++)
				result[i][j]=x[i][j] +y[i][j];
	for (i=0;i<3;i++)
		for(j=0;j<3;j++)
			printf("%d ",result[i][j]);
		printf("\n");
    
	
	
	
	
}
