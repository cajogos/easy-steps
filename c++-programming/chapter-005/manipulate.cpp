#include <iostream>

using namespace std;

int main()
{
	bool isTrue = 1;
	int num = 255;

	cout.width(40);
	cout.fill('.');
	cout << "Output" << endl;

	cout.precision(11);
	cout << "Pi: " << 3.1415926536 << endl;

	cout << isTrue << ": " << boolalpha << isTrue << endl;
	cout << num << ": " << hex << showbase << uppercase << num << endl;

	return 0;
}