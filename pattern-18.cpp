/*pattern18*/
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(s=1;s<n-i-1;s++)
		printf(" ");
		for(j=1;j<i+1;j++)
		printf("%d",i);
		printf("\n");
	}
}
