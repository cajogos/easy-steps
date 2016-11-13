#include <iostream>

using namespace std;

void add(int& a, int* b)
{ cout << "Total: " << (a + *b) << endl; };

int main()
{
	int num = 100, sum = 500;
	int& rNum = num;
	int* ptr = &num;
	void (*fn)(int& a, int* b) = add;

	cout << "Reference: " << rNum << endl;
	cout << "Pointer: " << *ptr << endl;

	ptr = &sum;

	cout << "Pointer now: " << *ptr << endl;

	fn(rNum, ptr);

	return 0;
}