#include <stdio.h>

int main()
{
	int a, b;

	printf("Assigned: \n");
	printf("\tVariable a = %d \n", a = 8);
	printf("\tVariable b = %d \n", b = 4);
	
	printf("Added & Assigned: \n");
	printf("\tVariable a += b (8 += 4) a = %d \n", a += b);
	
	printf("Subracted & Assigned: \n");
	printf("\tVariable a -= b (12 -= 4) a = %d \n", a -= b);

	printf("Multiplied & Assigned: \n");
	printf("\tVariable a *= b (8 *= 4) a = %d \n", a *= b);

	printf("Divided & Assigned: \n");
	printf("\tVariable a /= b (32 /= 4) a = %d \n", a /= b);

	printf("Modulated & Assigned: \n");
	printf("\tVariable a %%= b (8 %%= 4) a = %d \n", a %= b);

	return 0;
}