#include <iostream>

using namespace std;

int main()
{
	int a = 8, b = 4;

	cout << "Addition result: " << (a + b) << endl;
	cout << "Subtraction result: " << (a - b) << endl;
	cout << "Multiplication result: " << (a * b) << endl;
	cout << "Division result: " << (a / b) << endl;
	cout << "Modulus result: " << (a % b) << endl;

	cout << "Postfix increment: " << a++ << endl;
	cout << "Postfix result: " << a << endl;
	cout << "Prefix increment: " << ++b << endl;
	cout << "Prefix result: " << b << endl;

	return 0;
}