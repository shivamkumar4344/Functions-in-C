#include<stdio.h>
void add();
int sub();
int mul(int m ,int n);
void div(float k, float j);
main()
{
	add();
	int c = sub();
	printf("Substraction is :%d \n",c);
	int m,n,d;
	printf("Enter the value of m and n:-");
	scanf("%d %d",&m,&n);
	d = mul(m,n);
	printf("Multiplication is :%d",d);
	float k,j;
	printf("\nEnter the k and j:-");
	scanf("%f %f",&k ,&j);
	div(k,j);
	
	
}

void add()
{
	int a,b;
	printf("enter the value of a and b:-");
	scanf("%d %d",&a,&b);
	printf("Addition is %d\n",a+b);
}

int sub()
{
	int x,y;
	printf("Enter the value of x and y:-");
	scanf("%d %d",&x,&y);
	return x-y;
}

int mul (int m, int n){
	return m*n;
}

void div(float k, float j){
	printf("After division:- %f",k/j);
}



