//WAP to show difference between Structure and Union. 
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
union MyUnion {
    int intValue;
    float floatValue;
};
int main()
{
	struct Student s1={15,"Meet",50.56};
	printf("%d is rollNumber\n%s is name\n%f is marks.",s1.rollNumber,s1.name,s1.marks);
	
	union MyUnion u;

    u.intValue = 42;
    printf("\nInteger Value: %d\n", u.intValue);

    u.floatValue = 3.14;
    printf("Float Value: %.2f\n", u.floatValue);

    printf("Integer Value after assigning a float: %d\n", u.intValue);
	return 0; 
}
