#include <string>
#include <iostream>

using namespace std;

int main()
{
	string lang = "C++";
	string term = " Programming";
	string text = "C++ Programming";

	cout << "Concatenated: " << (lang + term) << endl;
	cout << "Original: " << lang << endl;

	cout << "Appended: " << lang.append(term) << endl;
	cout << "Original: " << lang << endl << endl;

	cout << "Differ: " << (lang == term) << endl;
	cout << "Match: " << (lang == text) << endl << endl;

	cout << "Match: " << lang.compare(text) << endl;
	cout << "Differ: " << lang.compare(term) << endl;
	cout << "Lower ASCII: " << lang.compare("zzzzz") << endl;

	return 0;
}