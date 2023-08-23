//Wap to print 972 to 279 using loop
#include<stdio.h>
int main()
{
	int no,reverse=0,reminder;
	printf("Enter number you want to reverse:");
	scanf("%d",&no);
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("Reverse number is:%d",reverse);
	return 0;
}

