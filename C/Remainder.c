#include<stdio.h>

int main()
{
	int a, b, q, r;
	
	printf("Please enter dividend: ");
	scanf("%d", &a);
	printf("Please enter divisor: ");
	scanf("%d", &b);
	
	q = a/b;
	printf("The quotient is %d.\n", q);
	
	r = a%b;
	printf("The remainder is %d.\n", r);
	
	return 0;
}
