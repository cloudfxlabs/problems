#include<stdio.h>
int main()
{
	int i=0,j;
	while(1)
	{	
		
		scanf("%d",&i);
		if(i == 42) { break; }
		printf("%d\n",i);
	}
	while(i > 0)
	{	
		
		scanf("%d",&i);
	}
	return 0; 
}	
