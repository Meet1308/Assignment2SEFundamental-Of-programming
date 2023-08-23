//Wap to find num is odd or even using ternary operator.

#include<stdio.h>
int main()
{
	int no;
	printf("Enter any number:");
	scanf("%d",&no);
	
	(no%2==0)?printf("Even no."):printf("Odd no.");
	return 0;
}
