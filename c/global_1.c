#include <stdio.h>

static int sum = 100;

int main()
{
	extern int sum;
	printf("Sum is %d \n", sum);

	extern int num;
	printf("Num is %d \n", num);

	return 0;
}