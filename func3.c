#include<stdio.h>
int sum();
main()
{
	int c=sum();
	printf("Sum is:%d",c);
}

int sum(){
	int a,b;
	printf("Enter the values of a and b:-");
	scanf("%d %d",&a,&b);
	return a+b;
}
