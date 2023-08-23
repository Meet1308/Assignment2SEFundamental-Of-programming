#include<stdio.h>
int main()
{	
	int a,b,choice,sum,sub,mul,div;
	printf("Menu.-----------\n");
	printf("\t1.Addition\n");
	printf("\t2.Subtraction\n");
	printf("\t3.Multiplication\n");
	printf("\t4.Division\n");
	
	printf("Choose any operation from this:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Enter a and b two values:");
			printf("\nA is:");
			scanf("%d",&a);
			printf("\nB is:");
			scanf("%d",&b);
			sum=a+b;
			printf("\n%d + %d :%d",a,b,sum);
			break;
			
		case 2:
			printf("Enter a and b two values:");
			printf("\nA is:");
			scanf("%d",&a);
			printf("\nB is:");
			scanf("%d",&b);
			sub=a-b;
			printf("\n%d - %d :%d",a,b,sub);
			break;
			
		case 3:
			printf("Enter a and b two values:");
			printf("\nA is:");
			scanf("%d",&a);
			printf("\nB is:");
			scanf("%d",&b);
			mul=a*b;
			printf("\n%d * %d :%d",a,b,mul);
			break;
			
		case 4:
			printf("Enter a and b two values:");
			printf("\nA is:");
			scanf("%d",&a);
			printf("\nB is:");
			scanf("%d",&b);
			div=a/b;
			printf("\n%d / %d :%d",a,b,div);
			break;
			
		default:
			printf("Invalid Choise plese choose from menu.");
			break;
	}
	return 0;
}
