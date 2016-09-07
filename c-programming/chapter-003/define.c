#include <stdio.h>

#define LINE "_______________________________"
#define TITLE "C Programming in Easy Steps"
#define AUTHOR "Mike McGrath"

// Windows is now NT so _WIN32 did not work for me
#ifdef _WINT_T
#define SYSTEM "Windows"
#endif

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif

int main()
{
	printf("\n \t %s \n \t %s \n", LINE, TITLE);
	printf("\t by %s \n \t %s \n", AUTHOR, LINE);
	printf("\n Operating System: %s \n", SYSTEM);

	return 0;
}