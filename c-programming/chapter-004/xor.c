#include <stdio.h>

int main()
{
	int x = 10, y = 5;
	printf("\nx=%d y=%d\n", x, y);

	x = x ^ y; // 1010 ^ 0101 = 1111 (decimal 15)
	y = x ^ y; // 1111 ^ 0101 = 1010 (decimal 10)
	x = x ^ y; // 1111 ^ 1010 = 0101 (decimal 5)

	printf("\nx=%d y=%d\n", x, y);

	return 0;
}