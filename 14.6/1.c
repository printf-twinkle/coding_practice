#include<stdio.h>
int main()
{
	int amt,i;
	scanf("%d",&amt);
	int currencies[] = {2000,500,200,100,50,20,10,5,2,1};
	int count[10] = {0};
	if (amt > 25000 || amt <= 0)
	{
		printf("Error");
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (currencies[i] <= amt)
			{
				count[i] = amt / currencies[i];
				amt -= currencies[i];
			}
		}
		for (i = 0; i<10; i++)
			printf("%d",count[i]);
				
	}
}
 
