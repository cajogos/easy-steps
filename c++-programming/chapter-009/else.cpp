#if defined _WIN32
	#define PLATFORM "Windows"
#elif defined __linux
	#define PLATFORM "Linux"
#elif defined __CYGWIN__
	#define PLATFORM "Cygwin"
#else
	#define PLATFORM "Unknown"
#endif

#include <iostream>

using namespace std;

int main()
{
	cout << PLATFORM << " System" << endl;

	if (PLATFORM == "Windows")
	{
		cout << "Performing windows only tasks..." << endl;
	}
	else if (PLATFORM == "Linux")
	{
		cout << "Performing Linux only tasks..." << endl;
	}

	return 0;
}