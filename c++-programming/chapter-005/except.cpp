#include <stdexcept>
#include <typeinfo>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string lang = "C++";
	int num = 1000000000; // One billion (I think, haven't counted)

	try
	{
		// lang.replace(100, 1, "C");
		// lang.resize(3 * num);
		ifstream reader("nosuchfile.txt");
		if (!reader)
		{
			throw logic_error("File not found!");
		}
	}
	catch (out_of_range &e)
	{
		cerr << "Range Exception: " << e.what() << endl;
		cerr << "Exception Type: " << typeid(e).name();
		cerr << endl << "Program terminated." << endl;
		return -1;
	}
	catch (exception &e)
	{
		cerr << "Exception: " << e.what() << endl;
		cerr << "Exception type: " << typeid(e).name() << endl;
	}
	cout << "Program continues..." << endl;
	return 0;
}