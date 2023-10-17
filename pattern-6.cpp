/*pattern6*/
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(s=0;s<i;s++)
		printf(" ");
		for(j=0;j<9-2*i;j++)
		printf("*");
		printf("\n");
	}
}
