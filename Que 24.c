// WAP to find factorial using recursion 

#include<stdio.h>
int main()														
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	int result=fact(n);
	printf("Fectorial of this number is %d.",result);
	return 0;
}
int fact(int a)
{
	if(a>0)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
