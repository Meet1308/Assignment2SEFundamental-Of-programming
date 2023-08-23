//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int no,i,table;
	printf("Enter any number you want table of it:");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
	
		table=no*i;
		printf("\n%d * %d : %d",no,i,table);
	}

	return 0;
}
