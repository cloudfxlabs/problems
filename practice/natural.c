#include<stdio.h>

int main(void)
{
	int n1,n2,s;
	printf("enter the two numbers n1 n2 :\n");
	scanf("%d %d",&n1,&n2);
	if((n1>0 && n1<=200) && (n2>0 && n2<=200))
	{
		s=n1+n2;
		printf(" %d ",s);
		printf("\n");
	}
	return 0;
}
