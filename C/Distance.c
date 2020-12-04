#include<stdio.h>

int main()
{
	float d, t, s;
	printf("Please enter distance (in kms): ");
	scanf("%f", &d);
	printf("Please enter time (in hours): ");
	scanf("%f", &t);
	
	s = d/t;
	
	printf("The speed is %1.2f kmph.\n", s);
	
	return 0;
}
