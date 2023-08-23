#include<stdio.h>
int main()
{
	//find odd number till ending point
	int i,no,sum=0;
	printf("Enter ending point:");
	scanf("%d",&no);
	
	// Find even numbers from them
	for(i=1;i<=no;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
}
	printf("Sum of these numbers:%d",sum);
	return 0;
}

