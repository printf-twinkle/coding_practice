#include<stdio.h>
int main()
{
	int c_m,c_y,x,y,z,t,w,daily=0,monthly=0,leap=0;
	scanf("%d",&c_m);
	scanf("%d",&c_y);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	scanf("%d",&t);
	scanf("%d",&w);
	if ((!((y>x)&&(y>z)&&(y>t)&&(y>w))) || ((x<=0) || (y<=0) || (z<=0) || (t<=0) || (w<=0)))
	{
		printf("Error");
	}
	else
	{
		daily=x+y+z+t+w;
		printf("Daily: %d\n",daily);
		if(((c_y % 4 == 0) && (c_y % 100!= 0)) || (c_y%400 == 0))
		{
			leap=1;
		}
		if(leap==1 && c_m==2)
		{
			monthly=daily*29;
		}
		else if(leap==0 && c_m==2)
		{
			monthly=daily*28;
		}
		else
		{
			if(c_m==1 || c_m==3 || c_m==5 || c_m==7 || c_m==8 || c_m==10 || c_m==12)
			{
				monthly=daily*31;
			}
			else
			{
				monthly=daily*30;
			}
		}
		printf("Monthly: %d",monthly);
	}
}		
