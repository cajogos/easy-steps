#include <string>
#include <iostream>

using namespace std;

void computeFeatures(string);

int main()
{
	string text = "C++ is fun";
	computeFeatures(text);

	text += " for everyone";
	computeFeatures(text);

	text = "C++ Fun";
	computeFeatures(text);

	text.clear();
	computeFeatures(text);

	return 0;
}

void computeFeatures(string text)
{
	cout << endl << "String: " << text << endl;
	cout << "Size: " << text.size();
	cout << "	Capacity: " << text.capacity();
	cout << "	Empty: " << text.empty() << endl;
}