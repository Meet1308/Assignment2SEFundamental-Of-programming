#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,mul,div;
	float mod;
	printf("Enter no 1:");
	scanf("%d",&n1);
	printf("\nEnter no 2:");
	scanf("%d",&n2);
	
	sum=n1+n2;
	printf("\nSum of two numbers is: %d",sum);
	
	sub=n1-n2;
	printf("\nSubtraction of two numbers is: %d",sub);
	
	mul=n1*n2;
	printf("\nMultiplication of two numbers is: %d",mul);
	
	div=n1/n2;
	printf("\nDivsion of two numbers is: %d",div);
	
	mod=n1%n2;
	printf("\nModulo of two numbers is: %f",mod);
	
	return 0;
}
