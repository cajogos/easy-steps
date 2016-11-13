#include <iostream>

using namespace std;

int main()
{
	char letters[8] = { 'C', '+', '+', ' ', 'F', 'u', 'n', '\0' };
	const char* text = "C++ Fun";

	const char* term = "Element: ";
	const char* lang = "C++";

	const char* ap1[3] = { "Great", "Program", "Code	" };
	const char* ap2[3] = { lang, "is ", "Fun" };

	const char* ap3[3] = { ap2[0], ap2[1], ap1[0] };
	const char* ap4[3] = { ap1[2], ap2[1], ap2[2] };

	cout << letters << endl;
	cout << text << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << term << i << "	";
		cout << ap1[i] << "	";
		cout << ap2[i] << "	";
		cout << ap3[i] << "	";
		cout << ap4[i] << endl;
	}

	return 0;
}