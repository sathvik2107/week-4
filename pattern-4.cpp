/*pattern4*/
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(s=0;s<n;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("*");
		printf("\n");
	}
}
