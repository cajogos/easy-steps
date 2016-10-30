#include <iostream>

using namespace std;

int main()
{
	int nil = 0, num = 0, max = 1;
	char cap = 'A', low = 'a';

	cout << "Equality comparisons: ";
	cout << "(0 == 0) " << (nil == num) << "(true)";
	cout << "(A == a) " << (cap == low) << "(false)";

	cout << endl << "Inequality comparison: ";
	cout << "(0 != 1) " << (nil != max) << "(true)";

	cout << endl << "Greater comparison: ";
	cout << "(0 > 1) " << (nil > max) << "(false)";

	cout << endl << "Lesser comparison: ";
	cout << "(0 < 1) " << (nil < max) << "(true)";

	cout << endl << "Greater or equal comparison: ";
	cout << "(0 >= 0) " << (nil >= num) << "(true)";

	cout << endl << "Lesser or equal comparison: ";
	cout << "(1 <= 0) " << (max <= num) << "(false)";

	return 0;
}