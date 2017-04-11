#include<stdio.h>
void find_least_pal(int num)
{
	int rev,carry,temp,leastPal;
	printf("fun call\n");
	for (leastPal=num;;leastPal++)
	{
	rev=0;
	temp = leastPal;
	while(temp)
	{
		carry=temp%10;
		rev=10*rev+carry;
		temp=temp/10;
     	}
	if (rev == leastPal)
	{
		printf("Least palindrom greater than num is: %d\n",leastPal);
		break;
	}
	}
}


int main()
{
	int tc,num;
        scanf("%d",&tc);
	for(;tc>0;tc--)
	{
        	scanf("%d",&num);
		find_least_pal(num);
      	}
      	return 0;
}	

