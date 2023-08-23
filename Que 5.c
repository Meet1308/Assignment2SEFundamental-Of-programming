#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("This is Leap Year.");
	}
	else
	{
		printf("This is not Leap year.");
	}
	return 0;
}
