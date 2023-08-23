#include<stdio.h>
int main()
{
	int i,j,cols;
	cols=1;
	
	for(i=1;i<10;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("* ");
		}
		if(i<5)
		{
			cols++;
		}
		else
		{
			cols--;
		}
		printf("\n");
	}
	return 0;	
}
