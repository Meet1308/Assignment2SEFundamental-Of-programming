//Wap to Swap two numbers using variable.

#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	//before swap value of two numbers;
	printf("before swap a is %d and b is %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swap a is %d and b is %d",a,b);
	return 0;	
}
