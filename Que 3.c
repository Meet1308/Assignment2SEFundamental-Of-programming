#include<stdio.h>
int main()
{
	// area of Circle
	
	int pi=3.14,r,area;   // here r= radius of circle.
	printf("Enter radius of circle:");
	scanf("%d",&r);
	area=pi*(r*r);  //area of Circle=pi * r(squre)
	printf("The area of Circle is :%d",area);
	
	
	//area of rectengle
	
	int w,h,area;    // here w=width, h=height;
	printf("Enter width of rectengle:");
	scanf("%d",&w);
	printf("Enter height of rectengle:");
	scanf("%d",&h);
	
	area=w*h;       //area of rectengle= width*height.
	printf("area of rectengle is:%d",area);
	
	
	//area of triangle
	
	int b,h,area;   // here b=base, h=height.
	printf("Enter base of Triangle:");
	scanf("%d",&b);
	printf("Enter Height of Triangle:");
	scanf("%d",&h);
	
	area=(b*h)/2;    // area of Triangle = 1/2* base*height.
	printf("Area of Triangle is :%d",area);
	
	return 0;
}
