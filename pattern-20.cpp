/*pattern20*/
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<n-i+2;j++)
		printf("%d",j);
		printf("\n");
	}
}
