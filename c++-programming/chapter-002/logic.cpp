#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 0;

	cout << "AND logic:" << endl;
	cout << "(a && a) " << (a && a) << " (true) ";
	cout << "(a && b) " << (a && b) << " (false) ";
	cout << "(b && b) " << (b && b) << " (false) " << endl;

	cout << endl << "OR logic:" << endl;
	cout << "(a || a) " << (a || a) << " (true) ";
	cout << "(a || b) " << (a || b) << " (true) ";
	cout << "(b || b) " << (b || b) << " (false) " << endl;

	cout << endl << "NOT logic:" << endl;
	cout << "a = " << a << " !a = " << !a << " ";
	cout << "b = " << b << " !b = " << !b << endl;

	return 0;
}