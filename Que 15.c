//  WAP to print Fibonacci series up to given numbers.
#include<stdio.h>
int main()
{
	//0 1 1 2 3 5 8 13
	int end,i,no1=0,no2=1,no3=no1+no2;
	printf("Enter ending point:");
	scanf("%d",&end);
	printf("\nFibonnaci series starts from:%d %d %d",no1,no2,no3);
	for(i=3;i<=end;i++)
	{
		no1=no2;
		no2=no3;
		no3=no1+no2;
		printf(" %d",no3);
	}
	return 0;
}
