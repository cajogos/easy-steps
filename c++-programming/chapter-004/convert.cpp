#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string term = "100";
	int number = 100;

	int num;
	string text;
	stringstream stream;

	stream << term; // Load the string
	stream >> num; // Extract the integer

	num /= 4;
	cout << "Integer value: " << num << endl;

	stream.str(""); // Empty the contents
	stream.clear(); // Empty the bit flags

	stream << number; // Load the integer
	stream >> text; // Extract the string

	text += " Per Cent";
	cout << "String value: " << text << endl;

	return 0;
}