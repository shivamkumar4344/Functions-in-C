//Function with RETURN TYPE and with PARAMETERS.
#include<stdio.h>
int sum(int a, int b);
main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
    scanf("%d",&b);	
	c = sum(a,b);
	printf("Sum is %d",c);
}

int sum (int a , int b)
{
	return a+b;
}
