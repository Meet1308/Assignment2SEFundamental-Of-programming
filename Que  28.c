// WAP to make addition, Subtraction and multiplication of two matrix using 
//2-D Array

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,Subtraction[2][2];
	printf("Enter 4 values of first array:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
				scanf("%d",&a[i][j]);	
		}
	}

	printf("Enter 4 values of second array:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
				scanf("%d",&b[i][j]);	
		}
	}
	printf("Subtraction of Two arrays is :%d",Subtraction[i][j]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			Subtraction[i][j]=a[i][j]-b[i][j];
		}
	}
	
	
	return 0;
}
