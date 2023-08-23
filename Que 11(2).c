//Wap to take input 10 num from user
#include<stdio.h>
int main()
{
	//find even number till end point
	int no,i,sum=0;
	printf("Enter ending point:");
	scanf("%d",&no);
	
	// Find even numbers from them
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
}
	printf("Sum of these numbers:%d",sum);
	return 0;
}
