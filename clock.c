#include<stdio.h>
#include<windows.h>
int main()
{
	int h,m,s; //00:00:00 
	int d=1000; // 1sec=1000
	printf("Set time : \n");
	scanf("%d %d %d",&h,&m,&s);
	
	if(h>12 || m>60 ||s>60)
	{
		printf("Error ! \n ");
		exit(0);
	}
	while(1)// infinite loop
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\n Clock :");
		printf("\n %0.2d: %0.2d :%0.2d",h,m,s);
		Sleep(d);
		system("cls"); // clear the screen
	}
		
}
