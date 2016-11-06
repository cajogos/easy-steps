#include <string>
#include <iostream>

using namespace std;

int main()
{
	string lang = "C++";

	try
	{
		lang.erase(4, 6);
	}
	catch (exception &error)
	{
		cerr << "Exception: " << error.what() << endl;
	}

	return 0;
}