//Function without RETURN TYPE and with PARAMETERS.

void sum(int a, int b);
main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	sum(a,b);
}

void sum(int a, int b)
{
	printf("Sum is %d",a+b);
}
