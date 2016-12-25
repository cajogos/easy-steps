#ifndef BOOK
	#define BOOK "C++ Programming in Easy Steps"
#endif

#include <iostream>

using namespace std;

int main()
{
	#ifdef BOOK
		cout << BOOK;
	#endif

	#ifndef AUTHOR
		#define AUTHOR "Mike McGrath"
		cout << " by " << AUTHOR << endl;
	#endif

	#ifdef BOOK
		#undef BOOK
	#endif

	#ifndef BOOK
		#define BOOK "Linux in Easy Steps"
		cout << BOOK << " by " << AUTHOR << endl;
	#endif

	return 0;
}