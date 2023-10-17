/*pattern15*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<i+1;j++)
		printf("%d",i);
		printf("\n");
	}
}

