#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,i,*a,digit,p=1,q=1,pos=0;
	scanf("%d",&k);
	if(k<0)
		printf("Error ");
	else
	{
	a = (int*)malloc(k*sizeof(int));
	int array[100];
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		if(a[i]<0)
		{
			printf("Error ");
			continue;
		}
		else
		{
			while(a[i]>0)
			{
				digit = a[i]%10;
				array[pos]=digit;
				a[i]=a[i]/10;
				pos+=1;
			 }
			 if(pos>10)
			 	printf("Error ");
			 for(i=0;i<pos;i++)
			 {
				if(i%2==0 && array[i]!=0)
					p*=array[i];
				else if(i%2!=0 && array[i]!=0)
					q*=array[i];
				else if(i==0)
					continue;
			}
			if(p>=q)
				printf("Dominant ");
			else
				printf("Magical ");
			}
	
		}
	}
	
}
