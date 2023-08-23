// Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age 
struct employee{
	int empno;
	char empname[10];
	char address[30];
	int age;
};
int main()
{
	struct  employee e1={50,"Meet","Rajkot",23};
	printf("%d is empno\n%s is empname\n%s is address\n%d is age.",e1.empno,e1.empname,e1.address,e1.age);
	return 0;
}
