#include<stdio.h>
int main()
{
	int p,r,t,i;   // here p=principle amount,  r=rate of interest, t=time period.
	printf("Enter principle amount:");
	scanf("%d",&p);
	printf("Enter rate of interest:");
	scanf("%d",&r);
	printf("Enter time periods:");
	scanf("%d",&t);
	
	i=(p*r*t)/100;  // interst = p*r*t/100.
	printf("Your simple interest is :%d",i);
	return 0;
}
