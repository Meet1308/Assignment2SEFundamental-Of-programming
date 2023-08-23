#include<stdio.h>
int main()
{
	int day,year;
	
	// convert days into yr.
	printf("Enter days :");
	scanf("%d",&day);		
	year=day/365;
	printf("%d years",year);
	
	
	//convert yr into days
	printf("\nEnter year :");
	scanf("%d",&year);
	day=year*365;
	printf("%d days.",day);
	return 0;
}
