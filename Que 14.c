// WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int no,i,fact=1;
	printf("Enter any number which you want fectorial:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)  //i=1,1<=5,1*1=1
	{                  //i=2,2<=5,1*2=2
		fact=fact*i;    //i=3,3<=5,2*3=6
	}                             //i=4,4<=5,6*4=24
	printf("\nFectorial of this number is:%d",fact);  //i=5;24*5=120
	return 0;
}
