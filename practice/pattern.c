#include<stdio.h>
int main()
{
 	int i,j,n,k;
	printf("enter the number");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}		
		printf("\n");
	}
	return 0;
}

