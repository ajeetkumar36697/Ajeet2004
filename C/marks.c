#include<stdio.h>
int main()
{
	int a,b,c,d;	//variable declaration
	printf("Please enter a marks in frist subject: ");
	scanf("%d",&a);
	printf("Please enter a marks in second subject: ");
	scanf("%d",&b);
	printf("Please enter amarks in third subject: ");
	scanf("%d",&c);
	d=a+b+c;
	printf("The total marks in three subject is %d.\n", d);	
}
