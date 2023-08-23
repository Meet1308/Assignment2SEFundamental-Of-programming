// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
int main()
{
	char num2[10],org;
	scanf("%s",&num2);
	printf("%s",strrev(num2));
	org=num2[10];
	
	if(num2==org)
	{
		printf("\nPelindrom");
	}
	else
	{
		printf("\nNot pelindrom.");
	}
	return 0;
}

