#include <string>
#include <iostream>

using namespace std;

int main()
{
	int num = 100;
	double sum = 0.0123456789;
	string text = "C++ Fun";

	cout << "Integer variable starts at: " << &num << endl;
	cout << "Double variable starts at: " << &sum << endl;
	cout << "String variable starts at: " << &text << endl;

	return 0;
}