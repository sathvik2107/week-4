/*pattern14*/
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("the no of rows are");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
	    printf(" ");{
	    	for(s=0;s<i+1;s++)
	        printf("*");
	        for(s=0;s<i+1;s++)
	        printf("*");
		}
    	printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
		printf(" ");
		for(s=0;s<n-i;s++)
		printf("*");
		for(s=0;s<n-i;s++)
		printf("*");
		printf("\n");
	}
}
