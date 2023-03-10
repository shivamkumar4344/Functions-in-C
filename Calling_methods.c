//#include<stdio.h>
//main()
//{
//	int x;
//	printf("Enter the value of x:");
//	scanf("%d",&x);
//	
//
//display(x);
//printf("\nvalue of x in the main function:-%d",x);
//printf("\n Address of x:%p\n",&x );
//}
//
//void display(int x)
//{
//	x = x+1;
//	printf("\nvalue of x in display function:-%d",x);
//	printf("\n Address of x:%p\n",&x );
//}


#include<stdio.h>
main()
{

int *a,b=5;
a=&b;
printf("%d",*a);
}

