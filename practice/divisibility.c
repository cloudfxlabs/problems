#include<stdio.h>

int main()
{
	int i,n,x,y,s,j;
	scanf("%d",&s);
        for ( j = 0; j < s; j++) {
	scanf("%d %d %d",&n,&x,&y);
	//printf("%d\t%d\t%d\n",n,x,y);
	for(i=1;i<=n;i++)
	{
		//printf("%d div %d = %d & %d div %d = %d\n",i,x,i%x,i,y,i%y);
		
		if(i%x == 0 && i%y != 0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	}

	return 0;
}
