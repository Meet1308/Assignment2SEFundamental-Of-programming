#include<stdio.h>
int main()
{
	int a[]={50,55,150,60,90};
	int b=5,c;
	c=max(a,b);
	printf("\n Maximum number is :%d",c);
	return 0;
}
int max(int x[],int y)
{
	int t,i;
	t=x[0];
	for(i=1;i<y;i++)
	{
		if(x[i]>t)
		t=x[i];
	}
	return(t);
}
