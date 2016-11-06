#include <iostream>

using namespace std;

int main()
{
	int a = 8, b = 16;

	int* aPtr = &a;
	int* bPtr;
	bPtr = &b;

	cout << "Addresses of pointers..." << endl;
	cout << "aPtr: " << &aPtr << endl;
	cout << "bPtr: " << &bPtr << endl << endl;

	cout << "Values in pointers..." << endl;
	cout << "aPtr: " << aPtr << endl;
	cout << "bPtr: " << bPtr << endl << endl;

	cout << "Values in addresses pointed to..." << endl;
	cout << "a: " << *aPtr << endl;
	cout << "b: " << *bPtr << endl;

	return 0;
}