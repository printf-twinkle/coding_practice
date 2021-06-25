#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,flag=0,sum=0;
	scanf("%d",&n);
	if(n<0)
		flag=1;
	*a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=0)
			flag=1;
	}
	if(flag==1)
		printf("Error");
	else
    	{
        	for(i=0;i<n;i++)
        	{
            		if(a[i]>=52)
                		sum+=4;
            		else if(a[i]+4>=52)
                		sum+=52-a[i];
       	}
        sum*=4;
        printf("%d",sum);
    }
    }
