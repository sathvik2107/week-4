/*pattern21*/
#include<stdio.h>
int main()
{
	int i,j,n,s,k=1;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<n-i+1;j++)
		printf("%d",k++);
		printf("\n");
	}
}
