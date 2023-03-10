#include<stdio.h>
void sum(); //function declaration
main()
{
	sum();   //function call
//	sum();
}

void sum()   //function definition
{
	int a,b;
	printf("Enter the value of a & b:-");
	
	scanf("%d %d",&a,&b);
	printf("Sum is:%d",a+b);
//	sum();
}
